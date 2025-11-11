float Tensao = 0;
int valPot = 0;


void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  valPot = analogRead(A0);

  Tensao = valPot * 0.0048875853;

  Serial.println(Tensao, 3);

  delay(100);
}
