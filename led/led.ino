void setup()
{
  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(1,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available()>0)
  {
    int c,number;
    number=Serial.read();
    for(c=2;c<6;c++)
    {
      if(number%2==1)
        digitalWrite(c,HIGH);
      else 
        digitalWrite(c,LOW);
      number=number/2;
    }
  }
}
