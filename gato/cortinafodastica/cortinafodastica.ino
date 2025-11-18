int rele1 = 9;
int rele2 = 10;
int LED = 8;
int btn = 7;
int btnPress = 0;
char LDR = A0;
int Sensor1 = 11;
int Sensor2 = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(rele1, OUTPUT);
  pinMode(rele2, OUTPUT);
  pinMode(LED, OUTPUT);
  pinMode(btn, INPUT);
  pinMode(Sensor1, INPUT);
  pinMode(Sensor2, INPUT);
  digitalWrite(rele1, HIGH);
  digitalWrite(rele2, HIGH);
  digitalWrite(LED, HIGH);
  delay(100);
  digitalWrite(LED, LOW);
  Serial.begin(9600);
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

  if(digitalRead(LED)) {
    Serial.println(analogRead(LDR));

    if(analogRead(LDR) < 200 && !digitalRead(Sensor1)) {
      digitalWrite(rele1, LOW);
      digitalWrite(rele2, HIGH);
    } else if (analogRead(LDR) > 400 && !digitalRead(Sensor2)) {
      digitalWrite(rele1, HIGH);
      digitalWrite(rele2, LOW);
    } else {
      digitalWrite(rele1, HIGH);
      digitalWrite(rele2, HIGH);
    }
  } else {
    digitalWrite(rele1, HIGH);
    digitalWrite(rele2, HIGH);
  }
 
}
