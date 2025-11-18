int LED = 8;
int btn = 7;
int btnPress = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(btn, INPUT);

  digitalWrite(LED, LOW);
  delay(100);
  digitalWrite(LED, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
 if(digitalRead(btn) && btnPress == LOW) {
  digitalWrite(LED, !digitalRead(LED));
  btnPress = HIGH;
 }

 if(!digitalRead(btn)) {
  btnPress = LOW;
 }
}
