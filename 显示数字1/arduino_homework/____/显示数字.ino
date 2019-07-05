
void setup()
{
  pinMode(7, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);
  
  
}

void loop()
{
  int pin1 = 3;
  int pin2 = 4;
  int pin3 = 5;
  int pin4 = 6;
  int pin5 = 7;             //确定引脚，变量易于替换
  digitalWrite(pin5, LOW);
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
  
  
  if(Serial.available()>0)
  {
    int input = Serial.read() - '0';
    if((input & 1) == 1)
    {
      digitalWrite(pin1, HIGH);
    }
    
    if((input >> 1)&1 == 1)
    {
      digitalWrite(pin2, HIGH);
    }
    
    if((input >> 2)&1 == 1)
    {
      digitalWrite(pin3, HIGH);
    }
    
    if((input >> 3)&1 == 1)
    {
      digitalWrite(pin4, HIGH);
    }
    delay(2000);
    digitalWrite(pin5, HIGH);
    
  }
}
