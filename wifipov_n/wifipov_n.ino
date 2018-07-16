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
    ch = Serial.read();
    line[count] = ch;
    line[count + 1] = '\0';
  }
  for (int i = 0; i <= strlen(line); i++) {
    
  long a[] = {11111111, 11111111, 00011011, 00011011, 00011011, 00011011, 11111111, 11111110};
  long b[] = {11111111, 11111111, 11011011, 11011011, 11011011, 11011111, 11111000, 11110000};
  long c2[] = {11111111, 11111111, 11000011, 11000011, 11000011, 11000011, 11000011, 10000010};
  long d[] = {11111111, 11111111, 11000011, 11000011, 11000011, 11000011, 11111100, 11111100};
  long e[] = {11111111, 11111111, 11011011, 11011011, 11011011, 11011011, 11011011, 10010010};
  long f[] = {11111111, 11111111, 00011011, 00011011, 00011011, 00011011, 00011011, 00010010};
  long g[] = {11111111, 11111111, 11000011, 11011011, 11011011, 11011011, 11111011, 11110010};
  long h[] = {11111111, 11111110, 00011000, 00011000, 00011000, 00011000, 11111111, 11111110};
  long ip[] = {11000011, 11000011, 11111111, 11000011, 10000010, 00000000, 00000000, 00000000};
  long j[] = {11100011, 11100011, 11000011, 11000011, 11000011, 11111111, 00000011, 00000010};
  long k[] = {11111111, 11111110, 00011000, 00011000, 00011000, 11111111, 11000011, 10000010};
  long l[] = {11111111, 11111110, 11000000, 11000000, 11000000, 11000000, 11000000, 10000000};
  long m[] = {11111111, 11111110, 00000100, 00011000, 00011000, 00000100, 11111111, 11111110};
  long n[] = {11111111, 11111110, 00000100, 00011000, 00010000, 00100000, 11111111, 11111110};
  long o[] = {11111111, 11111111, 11000011, 11000011, 11000011, 11000011, 11111111, 11111110};
  long p[] = {11111111, 11111111, 00011011, 00011011, 00011011, 00011011, 00011111, 00011110};
  long q[] = {11111111, 11111111, 11000011, 11100011, 11100011, 11000011, 11111111, 11111110};
  long r[] = {11111111, 11111111, 00011011, 00011011, 00011011, 11111011, 11011111, 10011110};
  long s[] = {11011111, 11011111, 11011011, 11011011, 11011011, 11011011, 11111011, 11110010};
  long t[] = {00000011, 00000011, 00000011, 11111111, 11111111, 00000011, 00000011, 00000010};
  long u[] = {11111111, 11111110, 11000000, 11000000, 11000000, 11000000, 11111111, 11111110};
  long v[] = {00011111, 00011110, 11100000, 11000000, 11000000, 11100000, 00011111, 00011110};
  long w[] = {11111111, 11111110, 00100000, 00011000, 00010000, 00100000, 11111111, 11111110};
  long x[] = {11000011, 11000010, 00100100, 00011000, 00011000, 00100100, 11000011, 10000010};
  long y[] = {00011111, 00011110, 00011000, 11111000, 11111000, 00011000, 00011111, 00011110};
  long z[] = {11000011, 11000011, 11100011, 11011011, 11011011, 11000111, 11000011, 10000010};



  long n1[] = {11000011, 11000011, 11000011, 11111111, 11111110, 11000000, 11000000, 10000000};
  long n2[] = {11111011, 11111011, 11011011, 11011011, 11011011, 11011011, 11011111, 10011110};
  long n3[] = {11011011, 11011011, 11011011, 11011011, 11011011, 11011011, 11111111, 11111110};
  long n4[] = {00011111, 00011110, 00011000, 00011000, 00011000, 11111111, 00011000, 00010000};
  long n5[] = {11011111, 11011111, 11011011, 11011011, 11011011, 11011011, 11111011, 11110010};
  long n6[] = {11111111, 11111111, 11011011, 11011011, 11011011, 11011011, 11111011, 11110010};
  long n7[] = {00000111, 00000111, 00000011, 00000011, 00000011, 00000011, 11111111, 11111110};
  long n8[] = {11111111, 11111111, 11011011, 11011011, 11011011, 11011011, 11111111, 11111110};
  long n9[] = {11011111, 11011111, 11011011, 11011011, 11011011, 11011011, 11111111, 11111110};
  long n0[] = {11111111, 11111111, 11000011, 11000011, 11000011, 11000011, 11111111, 11111110};

  long  s1[] = {11100000};
  long  s2[] = {10000000};
  long  s3[] = {10000000, 01000000, 00100000, 00010000, 00001000, 00000110, 00000010};
  long  s4[] = {11101000};
  long  s5[] = {00001110};
  long  s6[] = {11111110, 11000110, 10000010};
  long  s7[] = {10000110, 11111110, 11111110};
  long  S8[] = {00000110, 00001000, 00001000, 00010000, 01100000, 10000000, 10000000};
  long  s9[] = {00010000, 00010000, 00010000, 00010000, 00010000, 00010000, 00010000};
  long  s10[] = {01101000, 01101000, 01101000, 01101000, 01101000, 01101000, 01101000};
  long  s11[] = {00010000, 00101000, 00101000, 10000110};
  long  s12[] = {10000110, 00101100, 00101000, 00010000};
  long  s13[] = {00000110, 00000110, 00000110, 10110110, 00110110, 00111110, 00111110};
  long  s14[] = {01101000};
  long  s15[] = {00001110, 00000000, 00001110, 00001110};
  long  S16[] = {00010000, 11101110, 11101110, 10000110};
  long  s17[] = {10000110, 11101110, 11101110, 00010000};
  long  s18[] = {11111110};
  long  s19[] = {10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000};
  long  s20[] = {00010000, 00010000, 00110000, 11111110, 00010000, 00010000, 00010000};
  long  s21[] = {00000110, 00001000, 00001000};
  long  s22[] = {00001000, 00000110, 00001000, 00000110, 00000110};
  long  s23[] = {10111110};
  long  S24[] = {11111110, 10000110, 11110110, 11110110, 10110110, 11111110, 11111110};
  long  s25[] = {01101000, 11111110, 11111110, 01101000, 11111110, 01101100, 00101000};
  long  s26[] = {10111110, 10110110, 11111110, 11111110, 10110110, 11110110, 11110110};
  long  s27[] = {11001110, 11001110, 00101110, 00010000, 11101000, 11100110, 11100110};
  long  s28[] = {00001000, 00000110, 00001000, 00001000};
  long  s29[] = {11011110, 10100010, 10100010, 10100010, 11011110, 01000000, 01000000, 10100000};
  long  s30[] = {00010110, 00001000, 00010110, 00010110};
  long  s31[] = {01111000, 10000110, 10000010};
  long  S32[] = {10000110, 01111000, 00111000};

  float space[] = {000000000, 000000000, 0000000000, 0000000000, 0000000000, 00000000000, 000000000};


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
