#include <Keypad.h>    // 引用Keypad程式庫
#include <Arduino.h>
#include <TM1637Display.h>

// Module connection pins (Digital Pins)
#define CLK 2
#define DIO 3
 
#define KEY_ROWS 4 // 按鍵模組的列數
#define KEY_COLS 4 // 按鍵模組的行數
 
// 依照行、列排列的按鍵字元（二維陣列）
char keymap[KEY_ROWS][KEY_COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};
 
byte colPins[KEY_COLS] = {9, 8, 7, 6};     // 按鍵模組，行1~4接腳。
byte rowPins[KEY_ROWS] = {13, 12, 11, 10}; // 按鍵模組，列1~4接腳。 
 
// 初始化Keypad物件
// 語法：Keypad(makeKeymap(按鍵字元的二維陣列), 模組列接腳, 模組行接腳, 模組列數, 模組行數)
Keypad myKeypad = Keypad(makeKeymap(keymap), rowPins, colPins, KEY_ROWS, KEY_COLS);
 
TM1637Display display(CLK, DIO);
void setup(){
  Serial.begin(9600);
  display.setBrightness(0x0f);
}
   
void loop(){
  // 透過Keypad物件的getKey()方法讀取按鍵的字元
  char key = myKeypad.getKey();
   
  if (key){  // 若有按鍵被按下…
    Serial.println(key);  // 顯示按鍵的字元
    display.showNumberDec(key - '0');
  }
}
