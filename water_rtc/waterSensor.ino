/*
  AnalogReadSerial
  Reads an analog input on pin 0, prints the result to the serial monitor.
  Graphical representation is available using serial plotter (Tools > Serial Plotter menu)
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.
*/

// the loop routine runs over and over again forever:
int printUmidade() {
  // read the input on analog pin 0:
  float sensorValue = analogRead(WATER_SENSOR);
  // print out the value you read:
//  Serial.println(sensorValue);


 float value= (sensorValue/maxAnalog)*100;
 
 Serial.print(F("Sensor Umidade= " )); 
 Serial.print(value); 
 Serial.print(F("%"));

 String soma;
 soma.concat(F(" --- Soma Umidade["));
 soma.concat(contAmostra);
 soma.concat(F("]"));
 soma.concat(mediaUmidade);
 Serial.println(soma);
  
 mediaUmidade+=value;
 return value;
 
  
  delay(1);        // delay in between reads for stability
}
