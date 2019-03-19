 int LED_R = 5;
 int LED_G = 6;
 int LED_B = 7;

 void setup() {
  // put your setup code here, to run once:
  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);
}


void loop() {
  for (int i = 0; i <= 255; i++) {
    for (int j = 0; j <= 255; j++) {
      for (int k = 0; k <= 255; k++) {
        Change_Color(i, j,  k);
        delay(10);
      }
    }
  }
}


void Change_Color(int r, int g, int b)
{
  analogWrite(LED_R, r);
  analogWrite(LED_G, g);
  analogWrite(LED_B, b);
}
