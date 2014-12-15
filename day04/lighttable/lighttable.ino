#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>

// GUItool: begin automatically generated code
AudioSynthWaveform       waveform1;      //xy=139,194
AudioEffectDelay         delay1;         //xy=275,322
AudioMixer4              mixer1;         //xy=489,327
AudioMixer4              mixer2;         //xy=503,402
AudioMixer4              mixer3;         //xy=764,293
AudioOutputAnalog        dac1;           //xy=766,188
AudioConnection          patchCord1(waveform1, delay1);
AudioConnection          patchCord2(waveform1, 0, mixer1, 0);
AudioConnection          patchCord3(delay1, 0, mixer1, 1);
AudioConnection          patchCord4(delay1, 1, mixer1, 2);
AudioConnection          patchCord5(delay1, 2, mixer1, 3);
AudioConnection          patchCord6(delay1, 3, mixer2, 0);
AudioConnection          patchCord7(delay1, 4, mixer2, 1);
AudioConnection          patchCord8(delay1, 5, mixer2, 2);
AudioConnection          patchCord9(delay1, 6, mixer2, 3);
AudioConnection          patchCord10(mixer1, 0, mixer3, 0);
AudioConnection          patchCord11(mixer2, 0, mixer3, 1);
AudioConnection          patchCord13(mixer3, dac1);
// GUItool: end automatically generated code


float lpf_value = 0;
float hpf_value = 0;

int sample = 0;
int last_sample = 0;
byte sample_counter = 0;

int16_t waveform[257];

void setup(){
  // setup AudioMemory, quite large due to delay lines
  AudioMemory(120);
  // set waveform amplitude, frequency and user wavetable
  waveform1.begin(0.8, 220, WAVEFORM_ARBITRARY);
  // select wavetable,
  waveform1.arbitraryWaveform(waveform, 1000);
  // set attentuation for the mixer to prevent clipping
  mixer3.gain(0, 0.4);
  mixer3.gain(1, 0.4);
  
  // setup delay with random times between 10..200ms
  for(int i = 0; i < 8; i ++) {
    delay1.delay(i, random(10, 200)); 
  }
  
  // fill wavaeform with 0s (silence)
  for(int i = 0; i < 256; i ++) {
    waveform[i] = 0;
  }
  
  // setup analog input, set resolution to 12bit 0..4095
  pinMode(A0, INPUT);
  analogReadRes(12);
  // setup serial port
  Serial.begin(38400);
}

void readLdr(){
  // store last ldr value
  last_sample = sample;
  // read current ldr value
  sample = analogRead(A0);
  
  // calculate a highpass filtered value, only fast changes like waving, shaking etc.
  hpf_value = 0.96 * (hpf_value + sample - last_sample);
  // calculate a lowpass filtered value, only slow changes like light situation, steady hand position
  lpf_value = lpf_value + 0.02 * (sample - lpf_value);
  
  // look at these in the Serial Monitor to understand how the different values change with different movements
  // first is the raw read out, second the highpass filtered, third the low pass filtered value
  Serial.print(sample);
  Serial.print(" ");
  Serial.print(hpf_value);
  Serial.print(" ");
  Serial.println(lpf_value);
  
}

void loop(){
  readLdr();
  // map ldr readouts to frequency, low pass filtered value only has the slow changes
  int freq = map(lpf_value, 600, 2600, 200, 30);
  waveform1.frequency(freq);
  // add new highpass filtered value to wavetable, to fill/overwrite whole table it takes approx 2.5s (wavetablesize/rate, 256/100)
  waveform[sample_counter++] = hpf_value * 16;
  // interesting, fills wavetabe only partially e.g. from index 0..15
  //sample_counter = (sample_counter+1) % 16;
  
  delay(10); //~100Hz
}
