int sensorValue;
int sensorValue2;

int inputPin = A0;
int inputPin1 = A1;
//A= puerto analogo

int enviar;
void setup(){
  Serial.begin(9600);  
}

void loop(){
  sensorValue = analogRead(inputPin);
  sensorValue2 = analogRead(inputPin1);
 
 // Serial.println(sensorValue, DEC);
  //Serial.println(sensorValue2, DEC);
  // datos por consola
  // Valor de la variable,
  //DEC= Dècimal

  //enviar= sensorValue/4;
  //enviar= sensorValue;
  //Serial.write(enviar);
 
  Serial.write(sensorValue);
  Serial.write(sensorValue);
  // datos por puerto serial
 delay(100);
}
