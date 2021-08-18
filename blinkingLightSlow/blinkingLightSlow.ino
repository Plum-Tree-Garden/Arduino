// plumtreegarden
// blinkingLightSlow.ino

int j=1;
int waitT=750;
String myString="j =";


void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  // print integer and string with a delay time of 750 miliseconds
  Serial.print(myString);
  Serial.println(j);
  delay(waitT);
}
