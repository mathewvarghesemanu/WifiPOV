#include<SoftwareSerial.h>
SoftwareSerial myserial(10, 11);

int LED1 = 2;
int LED2 = 3;
int LED3 = 4;
int LED4 = 5;
int LED5 = 6;
int LED6 = 7;
int LED7 = 8;
int LED8 = 9;
int i = 0;
int textlength;

void setup()
{
  Serial.begin(9600);
  myserial.begin(9600);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(LED8, OUTPUT);
}

void loop()
{
  i=0;
  while (myserial.available())
  {
    
    ch = myserial.read();
    if (ch == '\n')
      text(i) = '\0';
      textlength=i;
    else
      text(i) = ch;
  }
}

