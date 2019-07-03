#include<Morse.h>
Morse n(13);
char string[200];
int j = 0;
int m = 0;
void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop()
{
  // put your main code here, to run repeatedly:
  for(m=0; Serial.available()>0; m++)
  {
    string[m] = Serial.read();
  }

  for(j = 0; j < m; j++)
  {
    n.to_Morse(string[j], n);
  }
}
