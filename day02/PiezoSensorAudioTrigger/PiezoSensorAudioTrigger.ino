#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>

// GUItool: begin automatically generated code
AudioSynthNoisePink      pink1;          //xy=328,120
AudioEffectEnvelope      envelope1;      //xy=466,272
AudioOutputPWM           pwm1;           //xy=646,128
AudioConnection          patchCord1(pink1, envelope1);
AudioConnection          patchCord2(envelope1, pwm1);
// GUItool: end automatically generated code

float bias_offset, bias_delta;

int sample_counter = 0;
int piezo_value = 0;
boolean piezo_trigger = false;

void setup(){
  Serial.begin(115200);
  AudioMemory(16);
  
  
  // set amplitude
  pink1.amplitude(1.0);
  // short percussive envelope
  envelope1.attack(5);
  envelope1.decay(100);
  envelope1.sustain(0);
  
  
  pinMode(A0, INPUT);
  analogReadRes(16); // 16bit analogRead resolution 
  
  for(int i = 0; i < 1000; i++){
    bias_offset += analogRead(A0) * 0.001; // add 1/100
  }
  Serial.print("### bias: ");
  Serial.println(bias_offset);
}

void readPiezo(){
  int sample = analogRead(A0) - bias_offset;
  piezo_value = sample; // piezo value is -32767..+32767
  bias_delta += sample;
  sample_counter++; // increase by 1
  
  // adjust sample counter for sampling window
  if(sample_counter == 100) {
    // adjust bias_delta factor for response time, smaller = lower dc response = 
    bias_offset = bias_offset + (0.01 * bias_delta);
    bias_delta = 0;
    sample_counter = 0;
  }
    
}

void loop(){  
  readPiezo();
  
  if(piezo_value > 1000 && !piezo_trigger){
    float velocity = piezo_value/10000.0; // linear map piezo value 0..10000 to 0..1.0
    Serial.println(velocity);
    piezo_trigger = true;
    Serial.println("Trigger");
    pink1.amplitude(velocity);
    envelope1.noteOn();
  }
  
  if(piezo_value < -1000 && piezo_trigger){
    piezo_trigger = false;
  }
  
//  Serial.println(piezo_value);
  delay(1); //delay 1ms, loop runs with ~1000Hz
}
