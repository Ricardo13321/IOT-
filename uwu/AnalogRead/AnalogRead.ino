// Este programa lê a entrada do potenciômetro e imprime no Monitor Serial

int ValPot = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // Habilita a comunicação do serialh
}

void loop() {
  // put your main code here, to run repeatedly:
  ValPot = analogRead(A0);
  Serial.println(ValPot);
  delay(10);
}
