int redLed = 10;
int bright1 = 255;
int bright2 = 200;
int bright3 = 150;
int bright4 = 100;
int bright5 = 50;
int nBright = 0;
int tSek = 100;

void setup() {
  pinMode(redLed, OUTPUT);
}

void loop() {
  analogWrite(redLed, bright1);
  delay(tSek);
  analogWrite(redLed, bright2);
  delay(tSek);
  analogWrite(redLed, bright3);
  delay(tSek);
  analogWrite(redLed, bright4);
  delay(tSek);
  analogWrite(redLed, bright5);
  delay(tSek);
}
