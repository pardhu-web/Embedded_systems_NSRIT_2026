//East signal pins
#define E_red 2
#define E_green 3
#define E_yellow 4

//south signal pins
#define S_red 5
#define S_green 6
#define S_yellow 7

#define W_red 8
#define W_green 9
#define W_yellow 10

#define N_red 11
#define N_green 12
#define N_yellow 13

void setup()
{
  for(int i=2;i<14;i++)
  {
  pinMode(i,OUTPUT);
  }
}

void loop()
{
 E_allow();
 S_allow();
 W_allow();
 N_allow();
}


void E_allow()
{
digitalWrite(E_red,LOW);
 digitalWrite(E_green,HIGH);
 digitalWrite(E_yellow,LOW);

 digitalWrite(S_red,HIGH);
 digitalWrite(S_green,LOW);
 digitalWrite(S_yellow,LOW);

 digitalWrite(W_red,HIGH);
 digitalWrite(W_green,LOW);
 digitalWrite(W_yellow,LOW);

 digitalWrite(N_red,HIGH);
 digitalWrite(N_green,LOW);
 digitalWrite(N_yellow,LOW);
 
 delay(5000);
  digitalWrite(S_red,LOW);
 digitalWrite(S_green,LOW);
 digitalWrite(S_yellow,HIGH);
 delay(2000);

}


void S_allow()
{
  digitalWrite(E_red,HIGH);
 digitalWrite(E_green,LOW);
 digitalWrite(E_yellow,LOW);

 digitalWrite(S_red,LOW);
 digitalWrite(S_green,HIGH);
 digitalWrite(S_yellow,LOW);

 digitalWrite(W_red,HIGH);
 digitalWrite(W_green,LOW);
 digitalWrite(W_yellow,LOW);

 digitalWrite(N_red,HIGH);
 digitalWrite(N_green,LOW);
 digitalWrite(N_yellow,LOW);
 delay(5000);

 digitalWrite(W_red,LOW);
 digitalWrite(W_green,LOW);
 digitalWrite(W_yellow,HIGH);
 delay(2000);
}

void W_allow()
{
  digitalWrite(E_red,HIGH);
 digitalWrite(E_green,LOW);
 digitalWrite(E_yellow,LOW);

 digitalWrite(S_red,HIGH);
 digitalWrite(S_green,LOW);
 digitalWrite(S_yellow,LOW);

 digitalWrite(W_red,LOW);
 digitalWrite(W_green,HIGH);
 digitalWrite(W_yellow,LOW);

 digitalWrite(N_red,HIGH);
 digitalWrite(N_green,LOW);
 digitalWrite(N_yellow,LOW);
 delay(5000);

 digitalWrite(N_red,LOW);
 digitalWrite(N_green,LOW);
 digitalWrite(N_yellow,HIGH);
 delay(2000);
}

void N_allow()
{
  digitalWrite(E_red,HIGH);
 digitalWrite(E_green,LOW);
 digitalWrite(E_yellow,LOW);

 digitalWrite(S_red,HIGH);
 digitalWrite(S_green,LOW);
 digitalWrite(S_yellow,LOW);

 digitalWrite(W_red,HIGH);
 digitalWrite(W_green,LOW);
 digitalWrite(W_yellow,LOW);

 digitalWrite(N_red,LOW);
 digitalWrite(N_green,HIGH);
 digitalWrite(N_yellow,LOW);
 delay(5000);

 digitalWrite(E_red,LOW);
 digitalWrite(E_green,LOW);
 digitalWrite(E_yellow,HIGH);
 delay(2000);
}