int const a = 22, b = 23, c = 24, d = 25, e = 26, f = 27, g = 28, dp = 29;

void setup() {
  // put your setup code here, to run once:
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(dp, OUTPUT);

}

void seOn() {
  digitalWrite(a, 1);
  digitalWrite(b, 1);
  digitalWrite(c, 1);
  digitalWrite(d, 1);
  digitalWrite(e, 1);
  digitalWrite(f, 1);
  digitalWrite(g, 1);
  digitalWrite(dp, 1);
}

void seOff() {
  digitalWrite(a, 0);
  digitalWrite(b, 0);
  digitalWrite(c, 0);
  digitalWrite(d, 0);
  digitalWrite(e, 0);
  digitalWrite(f, 0);
  digitalWrite(g, 0);
  digitalWrite(dp, 0);
}

void seLoadR(int t, int s) {
  for (int i = 0; i < t; i++) {
    digitalWrite(a, 1);
    digitalWrite(b, 0);
    digitalWrite(c, 0);
    digitalWrite(d, 0);
    digitalWrite(e, 0);
    digitalWrite(f, 0);
    digitalWrite(g, 0);
    digitalWrite(dp, 0);
    delay(s);
    digitalWrite(a, 0);
    digitalWrite(b, 0);
    digitalWrite(c, 0);
    digitalWrite(d, 0);
    digitalWrite(e, 0);
    digitalWrite(f, 1);
    digitalWrite(g, 0);
    digitalWrite(dp, 0);
    delay(s);
    digitalWrite(a, 0);
    digitalWrite(b, 0);
    digitalWrite(c, 0);
    digitalWrite(d, 0);
    digitalWrite(e, 1);
    digitalWrite(f, 0);
    digitalWrite(g, 0);
    digitalWrite(dp, 0);
    delay(s);
    digitalWrite(a, 0);
    digitalWrite(b, 0);
    digitalWrite(c, 0);
    digitalWrite(d, 1);
    digitalWrite(e, 0);
    digitalWrite(f, 0);
    digitalWrite(g, 0);
    digitalWrite(dp, 0);
    delay(s);
    digitalWrite(a, 0);
    digitalWrite(b, 0);
    digitalWrite(c, 1);
    digitalWrite(d, 0);
    digitalWrite(e, 0);
    digitalWrite(f, 0);
    digitalWrite(g, 0);
    digitalWrite(dp, 0);
    delay(s);
    digitalWrite(a, 0);
    digitalWrite(b, 1);
    digitalWrite(c, 0);
    digitalWrite(d, 0);
    digitalWrite(e, 0);
    digitalWrite(f, 0);
    digitalWrite(g, 0);
    digitalWrite(dp, 0);
    delay(s);
  }
}

void seLoadF(int t, int s) {
  for (int i = 0; i < t; i++) {
    digitalWrite(a, 1);
    digitalWrite(b, 0);
    digitalWrite(c, 0);
    digitalWrite(d, 0);
    digitalWrite(e, 0);
    digitalWrite(f, 0);
    digitalWrite(g, 0);
    digitalWrite(dp, 0);
    delay(s);
    digitalWrite(a, 0);
    digitalWrite(b, 1);
    digitalWrite(c, 0);
    digitalWrite(d, 0);
    digitalWrite(e, 0);
    digitalWrite(f, 0);
    digitalWrite(g, 0);
    digitalWrite(dp, 0);
    delay(s);
    digitalWrite(a, 0);
    digitalWrite(b, 0);
    digitalWrite(c, 1);
    digitalWrite(d, 0);
    digitalWrite(e, 0);
    digitalWrite(f, 0);
    digitalWrite(g, 0);
    digitalWrite(dp, 0);
    delay(s);
    digitalWrite(a, 0);
    digitalWrite(b, 0);
    digitalWrite(c, 0);
    digitalWrite(d, 1);
    digitalWrite(e, 0);
    digitalWrite(f, 0);
    digitalWrite(g, 0);
    digitalWrite(dp, 0);
    delay(s);
    digitalWrite(a, 0);
    digitalWrite(b, 0);
    digitalWrite(c, 0);
    digitalWrite(d, 0);
    digitalWrite(e, 1);
    digitalWrite(f, 0);
    digitalWrite(g, 0);
    digitalWrite(dp, 0);
    delay(s);
    digitalWrite(a, 0);
    digitalWrite(b, 0);
    digitalWrite(c, 0);
    digitalWrite(d, 0);
    digitalWrite(e, 0);
    digitalWrite(f, 1);
    digitalWrite(g, 0);
    digitalWrite(dp, 0);
    delay(s);
  }
}


void sePrint(int n) {
  switch (n) {
    case 0:
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 1);
      digitalWrite(f, 1);
      digitalWrite(g, 0);
      digitalWrite(dp, 0);
      break;
    case 1:
      digitalWrite(a, 0);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 0);
      digitalWrite(e, 0);
      digitalWrite(f, 0);
      digitalWrite(g, 0);
      digitalWrite(dp, 0);
      break;
    case 2:
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 0);
      digitalWrite(d, 1);
      digitalWrite(e, 1);
      digitalWrite(f, 0);
      digitalWrite(g, 1);
      digitalWrite(dp, 0);
      break;
    case 3:
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 0);
      digitalWrite(f, 0);
      digitalWrite(g, 1);
      digitalWrite(dp, 0);
      break;
    case 4:
      digitalWrite(a, 0);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 0);
      digitalWrite(e, 0);
      digitalWrite(f, 1);
      digitalWrite(g, 1);
      digitalWrite(dp, 0);
      break;
    case 5:
      digitalWrite(a, 1);
      digitalWrite(b, 0);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 0);
      digitalWrite(f, 1);
      digitalWrite(g, 1);
      digitalWrite(dp, 0);
      break;
    case 6:
      digitalWrite(a, 1);
      digitalWrite(b, 0);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 1);
      digitalWrite(f, 1);
      digitalWrite(g, 1);
      digitalWrite(dp, 0);
      break;
    case 7:
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 0);
      digitalWrite(e, 0);
      digitalWrite(f, 0);
      digitalWrite(g, 0);
      digitalWrite(dp, 0);
      break;
    case 8:
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 1);
      digitalWrite(f, 1);
      digitalWrite(g, 1);
      digitalWrite(dp, 0);
      break;
    case 9:
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 0);
      digitalWrite(f, 1);
      digitalWrite(g, 1);
      digitalWrite(dp, 0);
      break;
    default:
      seOn();
      break;
  }
}
/////////////////////////////////////////


void loop() {
  for (int i = 0; i < 3; i++) {
    seOn();
    delay(100);
    seOff();
    delay(100);
  }

  for (int i = 0; i < 10; i++) {
    sePrint(i);
    delay(200);
  }
  for (int i = 0; i < 3; i++) {
    seLoadF(2, 100);
    seLoadR(2, 100);
  }

}
