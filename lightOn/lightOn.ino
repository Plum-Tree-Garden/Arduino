// plumtreegarden
// lightOn.ino

void setup() 
{
  // tell arduino what pin(s) working with: pin 13  
  // pinMode take 2 paramaters(pin# working with, input / output)
  // send signal so it will be output -> pin 13 becomes out
  pinMode(13,OUTPUT);
}

void loop() 
{
  // TURN LED ON = ON = 5V
  // TURN LED OFF = LOW
  // 2 paramaters - (pin to write to, on / off)
  digitalWrite(13,LOW);
  // digitalWrite(13,HIGH);  
}
