#define LED 5
#define LDR A0
/*
connect the Led with a resistor to Pin 5
Rled = (Vin-Vled)/Iled
Rled = (3.3V - 2V)/0.02A
Rled = 65 Ohm 
nearest value is 68 Ohm

connect ldr in a voltage divider configuration
see https://en.wikipedia.org/wiki/Voltage_divider
connect the middle to A0, the ldr to 3.3V, the other resistor to GND
Vout = Rldr/(R + Rldr) * 3.3V
brightness = Vout/3.3V * 1023
*/

void setup(){
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(LDR, INPUT);
}

void loop(){
  int brightness = analogRead(A0);   // returns value between 0..1023
  // effective ldr range is 10..300 (dark, bright), mapped to 255..0
  brightness = map(brightness, 10, 300, 255, 0);
  analogWrite(LED, brightness);    // pwm value between 0..255
  Serial.println(brightness);
  delay(100); // halt the loop for 100ms 
}
