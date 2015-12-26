int flexPin2 = A1;

void setup() 
{ 
  Serial.begin(9600);
} 
  
void loop() 
{ 
  int sensor2 = analogRead(flexPin2);
  float voltage2 = sensor2 * 5.0 /1023.0; //convert ADC reading to voltage  
  
  // Outout test
  //  serialFloatPrint(voltage2);
    
  Serial.println(voltage2);
  delay(20);
}
