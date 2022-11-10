int led1 = 10;
int led2 = 11;
int led3 = 12;
int led4 = 13;
int sek = 1000;
int fSek = 250;
int lSek = 3000;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop() {
  digitalWrite(led1, HIGH);
  delay(sek);
  //1 (0001)
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(sek);
  //2 (0010)
  
  digitalWrite(led1, HIGH);
  delay(sek);
  //3 (0011)
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(sek);
  //4 (0100)
  
  digitalWrite(led1, HIGH);
  delay(sek);
  //5 (0101)

  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(sek);
  //6 (0110)

  digitalWrite(led1, HIGH);
  delay(sek);
  //7 (0111)

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(sek);
  //8 (1000)

  digitalWrite(led1, HIGH);
  delay(sek);
  //9 (1001)

  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(sek);
  //10 (1010)

  digitalWrite(led1, HIGH);
  delay(sek);
  //11 (1011)

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(sek);
  //12 (1100)

  digitalWrite(led1, HIGH);
  delay(sek);
  //13 (1101)

  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(sek);
  //14 (1110)

  digitalWrite(led1, HIGH);
  delay(sek);
  //15 (1111)

  delay(sek);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  delay(fSek);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  delay(fSek);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  delay(fSek);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  delay(fSek);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  delay(fSek);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  delay(fSek);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  delay(fSek);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  delay(fSek);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  delay(fSek);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  delay(lSek);
}
