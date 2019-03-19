/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

// the setup function runs once when you press reset or power the board
int yPin=10;//定义数字10接口
int rPin=9;//定义数字9接口
int bPin=8;//定义数字8接口
    
int ledDelay; // delay between changes
int potPin = 2;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  //pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  Serial.println("LM35 Thermometer     ");

  
  pinMode(yPin,OUTPUT);//定义小灯接口为输出接口
  pinMode(rPin,OUTPUT);//定义小灯接口为输出接口
  pinMode(bPin,OUTPUT);//定义小灯接口为输出接口
}

// the loop function runs over and over again forever
void loop() {
    ledDelay = analogRead(potPin);
    
    digitalWrite(yPin, HIGH);
    delay(100 + ledDelay);
    digitalWrite(yPin, LOW);
    delay(100 + ledDelay);  
    digitalWrite(rPin, HIGH);
    delay(100 + ledDelay);
    digitalWrite(rPin, LOW);
    delay(100 + ledDelay);
    digitalWrite(bPin, HIGH);
    delay(100 + ledDelay);
    digitalWrite(bPin, LOW);
    delay(100);             
}
