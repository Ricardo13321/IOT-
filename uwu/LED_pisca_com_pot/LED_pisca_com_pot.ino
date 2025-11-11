int ValPot = 0;
int LED = 7;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  ValPot = analogRead(A0);
  Serial.println(ValPot);

  digitalWrite(LED, HIGH);
  delay(ValPot);
  digitalWrite(LED, LOW);
  delay(ValPot);
}
