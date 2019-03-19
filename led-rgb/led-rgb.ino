 int LED_R = 5;
 int LED_G = 6;
 int LED_B = 7;
 enum Color {Color_R,Color_G,Color_B,Color_RG,Color_RB,Color_GB,Color_RGB}; //枚举所有颜色

 void setup() {
  // put your setup code here, to run once:
  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);
}


void loop() {
  Change_Color(Color_R);
  delay(500);
  Change_Color(Color_G);
  delay(500);
  Change_Color(Color_B);
  delay(500);
  Change_Color(Color_RG);
  delay(500);
  Change_Color(Color_RB);
  delay(500);
  Change_Color(Color_GB);
  delay(500);
  Change_Color(Color_RGB);
  delay(500);

}


void Change_Color(unsigned char data_color) //选择颜色函数
{
  switch(data_color)
  {
  case Color_R:   //红色
    digitalWrite(LED_R,HIGH);
    digitalWrite(LED_G,LOW);
    digitalWrite(LED_B,LOW);
    break;
  case Color_G:   //绿色
    digitalWrite(LED_R,LOW);
    digitalWrite(LED_G,HIGH);
    digitalWrite(LED_B,LOW);
    break;
  case Color_B:   //蓝色
    digitalWrite(LED_R,LOW);
    digitalWrite(LED_G,LOW);
    digitalWrite(LED_B,HIGH);
    break;
  case Color_RG: //黄色
    digitalWrite(LED_R,HIGH);
    digitalWrite(LED_G,HIGH);
    digitalWrite(LED_B,LOW);
    break;
  case Color_RB: //紫色
    digitalWrite(LED_R,HIGH);
    digitalWrite(LED_G,LOW);
    digitalWrite(LED_B,HIGH);
    break;
  case Color_GB: //青色
    digitalWrite(LED_R,LOW);
    digitalWrite(LED_G,HIGH);
    digitalWrite(LED_B,HIGH);
    break;
  case Color_RGB:   //白色
    digitalWrite(LED_R,HIGH);
    digitalWrite(LED_G,HIGH);
    digitalWrite(LED_B,HIGH);
    break;
  default:
    break;
  }
}
