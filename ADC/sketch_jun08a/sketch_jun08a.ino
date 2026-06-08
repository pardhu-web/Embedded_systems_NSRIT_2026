#define sensor_1 A0
#define sensor_2 A1

#define fan 2     //motor
#define alert 3  //LED

int data1;
int data2;
void setup()
{
  Serial.begin(9600);
  pinMode(fan, OUTPUT);
  pinMode(alert, OUTPUT);
}

void loop()
{
  data1 = analogRead(sensor_1);  //temp
  data2 = analogRead(sensor_2);  //gas

  Serial.println("S1_data:" + String(data1));
  Serial.println("S2_data:" + String(data2));
  delay(1000);
  if (data1 > 45)
  {
    digitalWrite(fan, HIGH);
  }
  else
  {
    digitalWrite(fan, LOW);
  }

  if (data2 > 100)
  {
    digitalWrite(alert, HIGH);
  }
  else
  {
    digitalWrite(alert, LOW);
  }
}
