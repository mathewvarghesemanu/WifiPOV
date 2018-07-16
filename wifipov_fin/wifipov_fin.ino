#include<SoftwareSerial.h>
#include "pov.h"
SoftwareSerial myserial(10, 11);

int LED1 = 2;
int LED2 = 3;
int LED3 = 4;
int LED4 = 5;
int LED5 = 6;
int LED6 = 7;
int LED7 = 8;
int LED8 = 9;
int in = 0;
int textlength;
char ch, text[35];

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

void displaychar(long ch)
{
  
}
void checkcharacter(char line[])
{
  for (int index; index < textlength; index++)
  {
    switch (line[index])
    {
      case  'a': {
          displaychar(a);
          break;
        }
      case  'b': {
          displaychar(b);
          break;
        }
      case  'c': {
          displaychar(c);
          break;
        }
      case  'd': {
          displaychar(d);
          break;
        }
      case  'e': {
          displaychar(e);
          break;
        }
      case  'f': {
          displaychar(f);
          break;
        }
      case  'g': {
          displaychar(g);
          break;
        }
      case  'h': {
          displaychar(h);
          break;
        }
      case  'I': {
          displaychar(i);
          break;
        }
      case  'j': {
          displaychar(j);
          break;
        }
      case  'k': {
          displaychar(k);
          break;
        }
      case  'l': {
          displaychar(l);
          break;
        }
      case  'm': {
          displaychar(m);
          break;
        }
      case  'n': {
          displaychar(n);
          break;
        }
      case  'o': {
          displaychar(o);
          break;
        }
      case  'p': {
          displaychar(p);
          break;
        }
      case  'q': {
          displaychar(q);
          break;
        }
      case  'r': {
          displaychar(r);
          break;
        }
      case  's': {
          displaychar(s);
          break;
        }
      case  't': {
          displaychar(t);
          break;
        }
      case  'u': {
          displaychar(u);
          break;
        }
      case  'v': {
          displaychar(v);
          break;
        }
      case  'w': {
          displaychar(w);
          break;
        }
      case  'x': {
          displaychar(x);
          break;
        }
      case  'y': {
          displaychar(y);
          break;
        }
      case  'z': {
          displaychar(z);
          break;
        }
    }
  }
}
void loop()
{
  in = 0;
  while (myserial.available())
  {

    ch = myserial.read();
    if (ch == '\n')
    {
      text[in] = '\0';
      textlength = in;
    }
    else
      text[in] = ch;
  }
  checkcharacter(text);
}

