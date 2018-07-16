#include<SoftwareSerial.h>
SoftwareSerial myserial(10,11);

int delayTime = 1;
int charBreak = 2.1;
int LED1 = 2;
int LED2 = 3;
int LED3 = 4;
int LED4 = 5;
int LED5 = 6;
int LED6 = 7;
int LED7 = 8;
int LED8 = 9;

int count;
char line[20], ch;

void setup() {
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



void displayLine(long line)
{
  long myline;
  myline = line;
  int remainder;
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, LOW);
  digitalWrite(LED7, LOW);
  digitalWrite(LED8, LOW);

  for (int j = 1; j < 9; j++)
  {

    remainder = myline % 10;
    myline = myline / 10;

    if (remainder == 1)
    { switch (j) {
        case 1:
          digitalWrite(LED1, HIGH);
          break;
        case 2:
          digitalWrite(LED2, HIGH);
          break;
        case 3:
          digitalWrite(LED3, HIGH);
          break;
        case 4:
          digitalWrite(LED4, HIGH);
          break;
        case 5:
          digitalWrite(LED5, HIGH);
          break;
        case 6:
          digitalWrite(LED6, HIGH);
          break;
        case 7:
          digitalWrite(LED7, HIGH);
          break;
        case 8:
          digitalWrite(LED8, HIGH);
          break;


      }
    }
  }
}







void loop() {
  count = 0;
  while (Serial.available())
  {
    line[count] = Serial.read();
    count++;
  }
  line[count] = '\0';
  for (int i = 0; i <= strlen(line); i++) {
    


  if (line[i] == 'a') {
    for (int i = 0; i < 8; i++) {
      displayLine(a[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == 'b') {
    for (int i = 0; i < 8; i++) {
      displayLine(b[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == 'c') {
    for (int i = 0; i < 8; i++) {
      displayLine(c2[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == 'd') {
    for (int i = 0; i < 8; i++) {
      displayLine(d[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == 'e') {
    for (int i = 0; i < 8; i++) {
      displayLine(e[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == 'f') {
    for (int i = 0; i < 8; i++) {
      displayLine(f[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == 'g') {
    for (int i = 0; i < 8; i++) {
      displayLine(g[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == 'h') {
    for (int i = 0; i < 8; i++) {
      displayLine(h[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == 'i') {
    for (int it = 0; it < 5; it++) {
      displayLine(ip[it]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == 'j') {
    for (int i = 0; i < 8; i++) {
      displayLine(j[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == 'k') {
    for (int i = 0; i < 8; i++) {
      displayLine(k[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == 'l') {
    for (int i = 0; i < 8; i++) {
      displayLine(l[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == 'm') {
    for (int i = 0; i < 8; i++) {
      displayLine(m[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == 'n') {
    for (int i = 0; i < 8; i++) {
      displayLine(n[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == 'o') {
    for (int i = 0; i < 8; i++) {
      displayLine(o[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == 'p') {
    for (int i = 0; i < 8; i++) {
      displayLine(p[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == 'q') {
    for (int i = 0; i < 8; i++) {
      displayLine(q[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == 'r') {
    for (int i = 0; i < 8; i++) {
      displayLine(r[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == 's') {
    for (int i = 0; i < 8; i++) {
      displayLine(s[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == 't') {
    for (int i = 0; i < 8; i++) {
      displayLine(t[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == 'u') {
    for (int i = 0; i < 8; i++) {
      displayLine(u[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == 'v') {
    for (int i = 0; i < 8; i++) {
      displayLine(v[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == 'w') {
    for (int i = 0; i < 8; i++) {
      displayLine(w[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == 'x') {
    for (int i = 0; i < 8; i++) {
      displayLine(x[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == 'y') {
    for (int i = 0; i < 8; i++) {
      displayLine(y[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == 'z') {
    for (int i = 0; i < 8; i++) {
      displayLine(z[i]);
      delay(delayTime);
    } displayLine(0);
  }



  if (line[i] == '1') {
    for (int i = 0; i < 8; i++) {
      displayLine(n1[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == '2') {
    for (int i = 0; i < 8; i++) {
      displayLine(n2[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == '3') {
    for (int i = 0; i < 8; i++) {
      displayLine(n3[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == '4') {
    for (int i = 0; i < 8; i++) {
      displayLine(n4[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == '5') {
    for (int i = 0; i < 8; i++) {
      displayLine(n5[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == '6') {
    for (int i = 0; i < 8; i++) {
      displayLine(n6[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == '7') {
    for (int i = 0; i < 8; i++) {
      displayLine(n7[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == '8') {
    for (int i = 0; i < 8; i++) {
      displayLine(n8[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == '9') {
    for (int i = 0; i < 8; i++) {
      displayLine(n9[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == '0') {
    for (int i = 0; i < 8; i++) {
      displayLine(n0[i]);
      delay(delayTime);
    } displayLine(0);
  }




  if (line[i] == ',') {
    for (int i = 0; i < 1; i++) {
      displayLine(s1[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == '.') {
    for (int i = 0; i < 2; i++) {
      displayLine(s2[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == '/') {
    for (int i = 0; i < 7; i++) {
      displayLine(s3[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == ';') {
    for (int i = 0; i < 1; i++) {
      displayLine(s4[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == '\'') {
    for (int i = 0; i < 1; i++) {
      displayLine(s5[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == '[') {
    for (int i = 0; i < 3; i++) {
      displayLine(s6[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == ']') {
    for (int i = 0; i < 3; i++) {
      displayLine(s7[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == '\\') {
    for (int i = 0; i < 7; i++) {
      displayLine(S8[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == '-') {
    for (int i = 0; i < 7; i++) {
      displayLine(s9[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == '=') {
    for (int i = 0; i < 7; i++) {
      displayLine(s10[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == '<') {
    for (int i = 0; i < 4; i++) {
      displayLine(s11[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == '>') {
    for (int i = 0; i < 4; i++) {
      displayLine(s12[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == '\?') {
    for (int i = 0; i < 7; i++) {
      displayLine(s13[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == ':') {
    for (int i = 0; i < 1; i++) {
      displayLine(s14[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == '\"') {
    for (int i = 0; i < 4; i++) {
      displayLine(s15[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == '{') {
    for (int i = 0; i < 4; i++) {
      displayLine(S16[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == '}') {
    for (int i = 0; i < 4; i++) {
      displayLine(s17[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == '|') {
    for (int i = 0; i < 1; i++) {
      displayLine(s18[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == '_') {
    for (int i = 0; i < 7; i++) {
      displayLine(s19[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == '+') {
    for (int i = 0; i < 7; i++) {
      displayLine(s20[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == '`') {
    for (int i = 0; i < 3; i++) {
      displayLine(s21[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == '~') {
    for (int i = 0; i < 5; i++) {
      displayLine(s22[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == '!') {
    for (int i = 0; i < 1; i++) {
      displayLine(s23[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == '@') {
    for (int i = 0; i < 7; i++) {
      displayLine(S24[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == '#') {
    for (int i = 0; i < 7; i++) {
      displayLine(s25[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == '$') {
    for (int i = 0; i < 7; i++) {
      displayLine(s26[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == '%') {
    for (int i = 0; i < 7; i++) {
      displayLine(s27[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == '^') {
    for (int i = 0; i < 4; i++) {
      displayLine(s28[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == '&') {
    for (int i = 0; i < 8; i++) {
      displayLine(s29[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == '*') {
    for (int i = 0; i < 4; i++) {
      displayLine(s30[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == '(') {
    for (int i = 0; i < 3; i++) {
      displayLine(s31[i]);
      delay(delayTime);
    } displayLine(0);
  }
  if (line[i] == ')') {
    for (int i = 0; i < 3; i++) {
      displayLine(S32[i]);
      delay(delayTime);
    } displayLine(0);
  }

  if (line[i] == ',') {
    for (int i = 0; i < 8; i++) {
      displayLine(s2[i]);
      delay(delayTime);
    } displayLine(0);
  }
  delay(charBreak);
  }
}
