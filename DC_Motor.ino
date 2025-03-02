#define DIRA 4
#define DIRB 3

int i;
//External power supply recommened rather that getting power from arduino
void setup() 
{
  //---set pin direction
  pinMode(DIRA,OUTPUT);
  pinMode(DIRB,OUTPUT);
}

void loop() 
{
  //---back and forth example
    digitalWrite(DIRA,HIGH); //one way
    digitalWrite(DIRB,LOW);
    delay(1000);
    digitalWrite(DIRA,LOW);  //reverse
    digitalWrite(DIRB,HIGH);
    delay(1000);
}
   
