int led1 = 13;
int btn1 = 2;
int estadoled1 = 0;
int estadobtn1 = 0;
int anterior1 = 0;

int led2 = 12;
int btn2 = 3;
int estadoled2 = 0;
int estadobtn2 = 0;
int anterior2 = 0;

int btn3 = 4;
int estadobtn3 = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(btn1, INPUT);
  pinMode(led2, OUTPUT);
  pinMode(btn2, INPUT);
  estadoled2 = HIGH;
  estadoled1 = HIGH;

}

void loop() {
  // put your main code here, to run repeatedly:
  estadobtn1 = digitalRead(btn1);
  estadobtn2 = digitalRead(btn2);
  estadobtn3 = digitalRead(btn3);

  if(anterior1 == LOW && estadobtn1 == HIGH) {
    estadoled1 = !estadoled1;
  }
  
  if(anterior2 == LOW && estadobtn2 == HIGH) {
    estadoled2 = !estadoled2;
  }
  
  if(estadobtn3 == HIGH) {
    estadoled2 = HIGH;
    estadoled1 = HIGH;
  }

  digitalWrite(led2, estadoled2);
  digitalWrite(led1, estadoled1);

  anterior1 = estadobtn1;
  anterior2 = estadobtn2;

  delay(50);
}
