#define ldr A0
#define led 13
int ldrvalue;
void setup(){
  pinMode(led, OUTPUT);
   Serial.begin(9600);
   }
void loop(){
  ldrvalue= analogRead(ldr);
  if(ldrvalue < 500){
  digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
  }
  delay(200);
  }
