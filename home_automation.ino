byte val;
#define L1 2 
#define L2 3
#define S 4
#define F 5
#define A 6 


void setup()
{
  Serial.begin(9600);
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(S, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(A, OUTPUT);
}

void loop()
{
 if(Serial.available())
    {
    val=Serial.read();
    Serial.println(int(val));//Display received value on Serial Monitor
    switch(int(val))
      {
      case 49: digitalWrite(L1,HIGH); break;//Turn Light1 ON
      case 50: digitalWrite(L1,LOW);  break;//Turn Light1 OFF
      case 51: digitalWrite(L2,HIGH); break;//Turn Light2 ON
      case 52: digitalWrite(L2,LOW);  break;//Turn Light2 OFF
      case 53: digitalWrite(S,HIGH);  break;//Turn SOCKET ON
      case 54: digitalWrite(S,LOW);   break;//Turn SOCKET OFF
      case 55: digitalWrite(F,HIGH);  break;//Turn FAN ON
      case 56: digitalWrite(F,LOW);   break;//Turn FAN OFF
      case 57: digitalWrite(A,HIGH);  break;//Turn AC ON
      case 48: digitalWrite(A,LOW);   break;//Turn AC OFF
      }
    }
}
