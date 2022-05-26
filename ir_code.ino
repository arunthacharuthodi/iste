int IR = 3;
int value;
void setup()
{
  pinMode(12,OUTPUT);
  pinMode(3,INPUT);
  Serial.begin(9600);
}
void loop()
{
  value = digitalRead(IR);
  Serial.println(value);
  delay(1000);
  if (digitalRead(3)== LOW)
  {
    digitalWrite(12,HIGH);
    
    
    
  }
  else 
  {
    
    digitalWrite(12,LOW);
   
  }
  
}
