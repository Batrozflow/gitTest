/*
This is a test
*/

long counter;

// the setup function runs once when you press reset or power the board
void setup()
{
	counter = 0;
}

// the loop function runs over and over again until power down or reset
void loop()
{
	counter++;
  delay(1000);
  Serial.print("Counter=");
}
