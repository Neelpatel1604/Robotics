int ledpin=11;           //Set the digital 11 to LED
int PIRpin=5;           //Set the digital 5 to PIR
void setup() {
 
  pinMode( ledpin,OUTPUT);     
  pinMode( PIRpin,INPUT);   
}

void loop() 
{

  if(digitalRead(PIRpin)==LOW)
  {
    digitalWrite(ledpin,LOW);
  }else
  {
    digitalWrite(ledpin,HIGH);
  }
}
