int motorPin1 =  5;    // One motor wire connected to digital pin 5
int motorPin2 =  6;    // One motor wire connected to digital pin 6
void setup()   {                
  pinMode(motorPin1, OUTPUT); 
  pinMode(motorPin2, OUTPUT);  
}
void loop()                     
{
  rotateRight(50, 1000);
  rotateRight(150, 1000);
  rotateRight(200, 1000);
  rotateRight(10, 1500);
}
void rotateRight(int speedOfRotate, int length){
  analogWrite(motorPin2, speedOfRotate);
  digitalWrite(motorPin1, LOW); 
  delay(length); 
  digitalWrite(motorPin2, LOW);  
}
void rotateRightFull(int length){
  digitalWrite(motorPin2, HIGH); 
  digitalWrite(motorPin1, LOW); 
  delay(length);
  digitalWrite(motorPin2, LOW); 
}
