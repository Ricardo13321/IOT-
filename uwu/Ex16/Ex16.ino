int LDR = 0;
int LED1 = 7;
int LED2 = 8;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  LDR = analogRead(A0);
  Serial.println(LDR);
  if(LDR > 500) {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, HIGH);
  } else if (LDR < 200) {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
  } else {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
  }
}
