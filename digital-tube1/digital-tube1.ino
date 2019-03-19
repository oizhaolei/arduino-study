//h g f e d c b a
int table[10][8] =
  {
   {0,0,1,1,1,1,1,1}, //0
   {0,0,0,0,0,1,1,0}, //1
   {0,1,0,1,1,0,1,1}, //2
   {0,1,0,0,1,1,1,1}, //3
   {0,1,1,0,0,1,1,0}, //4
   {0,1,1,0,1,1,0,1}, //5
   {0,1,1,1,1,1,0,1}, //6
   {0,0,0,0,0,1,1,1}, //7
   {0,1,1,1,1,1,1,1}, //8
   {0, 1, 1, 0, 1, 1, 1, 1} //9
  };

unsigned char outputPin[8] = {
  2, 3, 4, 5, 6, 7, 8, 9
  };

 void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < 8; i++) {
    pinMode(outputPin[i], OUTPUT);
    digitalWrite(outputPin[i], HIGH);
 }

  //print(0);
}

void print(int num) {
    for (int i = 0; i < 8; i++) {
        if (table[num][i] == 1) {
          digitalWrite(outputPin[i], HIGH);
        } else {
          digitalWrite(outputPin[i], LOW);
        }
    }
}
  
void loop() {
}
