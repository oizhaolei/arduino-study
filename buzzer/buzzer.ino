 int BUZZER = 10;


 void setup() {
  // put your setup code here, to run once:
  pinMode(BUZZER, OUTPUT);
}


void loop() {
  tone(BUZZER, 1, 10);
  delay(1000);
}
