/**
 * 人体探测
 * 靠近探测器，LED灯亮起，离开则灭掉
 * 
 * 
 */

int PIR = 13;
int LEDPIN = 7;

void setup()
{
  pinMode(PIR, INPUT);
  pinMode(LEDPIN, OUTPUT);
}
void loop()
{
  int temp = digitalRead(PIR);
  if (temp == 0) {
    digitalWrite(LEDPIN, LOW);
  } else {
    digitalWrite(LEDPIN, HIGH);
  }
  delay(100);
}
