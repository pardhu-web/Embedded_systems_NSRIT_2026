#define button 5  //input
#define led 6     //output

void setup()
{
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);
}

void loop()
{
  if (digitalRead(button) == 0)
  {
    digitalWrite(led, HIGH);
  }
  else
  {
    digitalWrite(led, LOW);
    }

}
