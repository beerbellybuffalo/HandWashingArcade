#include <Keyboard.h>
int sensorValue = digitalRead(8); //connect PIR sensor to pin 8 on the Arduino board

void setup() //put your setup code here, to run once:
{
pinMode(8,INPUT);
Keyboard.begin();
}

void loop() //put your main code here, to run repeatedly:
{
if(sensorValue == 1)
  {
  Keyboard.write(32);  // send a space to the computer via Keyboard HID
  delay(65000); //the game lasts 60 seconds
  }
}
