// plumtreegarden
// printConsole.ino

void setup() 
{
  // tell arduino what pin(s) working with: pin 13  
  // pinMode take 2 paramaters(pin# working with, input / output)
  // send signal so it will be output -> pin 13 becomes out
  pinMode(13,OUTPUT);
}

void loop() 
{
  // TURN LED ON = ON = 5V, TURN LED OFF = LOW
  // 2 paramaters - (pin to write to, on / off)
  // TODO   MAKE BLINKING LED
  // TODO   ADD DELAY BETWEEN ON / OFF
  // delay -> 1 -> PARAMATER = MILISECONDS -> 1000 MS = 1S
  // TODO - FAST BLINKING LIGHT
  digitalWrite(13,HIGH);
  delay(100);
  digitalWrite(13,LOW); 
  delay(900); 
}
