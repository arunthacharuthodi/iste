## Home code

```void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);

}


```
## ircode 
```
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
```
