int ledPin = 5;
    float sinVal;
    int ledVal;
    void setup() {
      Serial.begin(9600);
      pinMode(ledPin, OUTPUT);
}
    void loop() {
      for (int x=0; x<180; x++) {
        // convert degrees to radians
        // then obtain sin value
        sinVal = (sin(x*(3.1412/180)));
        ledVal = int(sinVal*255);
        analogWrite(ledPin, ledVal);
        Serial.println(ledVal);
        delay(25);
} }
