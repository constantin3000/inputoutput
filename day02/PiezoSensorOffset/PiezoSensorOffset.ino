float bias_offset, bias_delta;

int sample_counter = 0;
int piezo_value;

void setup(){
  Serial.begin(115200);
  pinMode(A0, INPUT);
  analogReadRes(16); // 16bit analogRead resolution 
  
  
  // calibration routine for bias voltage
  long calibration_value = 0;
  
  for(int i = 0; i < 1000; i++){
    bias_offset += analogRead(A0) * 0.001; // add 1/100
  }
  Serial.print("### bias: ");
  Serial.println(bias_offset);
}

void readPiezo(){
  int sample = analogRead(A0) - bias_offset;
  piezo_value = sample;
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
  
  Serial.println(piezo_value);
  delay(1); //delay 1ms, loop runs with ~1000Hz
}
