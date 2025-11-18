int rele1 = 9;
int rele2 = 10;
int LED = 8;
int btn = 7;
int btnPress = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(rele1, OUTPUT);
  pinMode(rele2, OUTPUT);
  pinMode(LED, OUTPUT);
  pinMode(btn, INPUT);
  digitalWrite(rele1, HIGH);
  digitalWrite(rele2, HIGH);
  digitalWrite(LED, LOW);
  delay(100);
  digitalWrite(LED, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
 if(digitalRead(btn) && btnPress == LOW) {
  digitalWrite(LED, !digitalRead(LED));
  digitalWrite(rele1, digitalRead(LED));
  //digitalWrite(rele2, digitalRead(LED));
  btnPress = HIGH;
 }

 if(!digitalRead(btn)) {
  btnPress = LOW;
 }
}
