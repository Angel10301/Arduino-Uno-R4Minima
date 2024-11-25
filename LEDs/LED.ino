//This program is for when using an Arduino Uno R4 Minima board.
//This program is for a set amount of LEDs to flicker and turn on. First with just a single LED and then for multiple with multiple patterns.


//For single LED
// void setup(){
//     for (int a = 2; a <= 9; a++){
//         pinMode(a, OUTPUT);
//     }
// }

// void loop(){
//     for (i = 2l i <= 9; i++){
//         digitalWrite(i, HIGH);
//         delay(0);
//         digitalWrite(i, HIGH);
//     }
// }

//Multiple LEDS
#define t 100 //time delay
void setup() {
  for (byte a = 2; a <= 9; a++) {
    pinMode(a, OUTPUT);
  }
}
 
void loop() {
  //pattern one
  for (byte i = 2; i <= 9; i++) {
    digitalWrite(i, HIGH);
    delay(t);
    digitalWrite(i, LOW);
  }
  for (byte z = 8; z > 2; z--) {
    digitalWrite(z, HIGH);
    delay(t);
    digitalWrite(z, LOW);
  }
 
  //pattern two
  for (byte i = 2; i <= 9; i++) {
    digitalWrite(i, HIGH);
    digitalWrite(i + 1, HIGH);
    digitalWrite(i + 2, HIGH);
    delay(t);
    digitalWrite(i, LOW);
    digitalWrite(i - 1, LOW);
    digitalWrite(i - 2, LOW);
  }
  for (byte z = 8; z > 2; z--) {
    digitalWrite(z, HIGH);
    digitalWrite(z - 1, HIGH);
    digitalWrite(z - 2, HIGH);
    delay(t);
    digitalWrite(z, LOW);
    digitalWrite(z - 1, LOW);
    digitalWrite(z - 2, LOW);
  }
  //pattern three
  for (byte i = 2; i <= 9; i++) {
    digitalWrite(i, HIGH);
    delay(t);
  }
  for (byte z = 9; z > 2; z--) {
    digitalWrite(z, LOW);
    delay(t);
  }
 
  //pattern four
  for (byte i = 2; i <= 9; i++) {
    digitalWrite(i, HIGH);
    delay(t);
  }
  for (byte x = 2; x <= 9; x++) {
    digitalWrite(x, LOW);
    delay(t);
  }
  for (byte y = 9; y >= 2; y--) {
    digitalWrite(y, HIGH);
    delay(t);
  }
  for (byte z = 9; z >= 2; z--) {
    digitalWrite(z, LOW);
    delay(t);
  }
 
  //pattern five
  int led [8] = {2, 3, 4, 5, 6, 7, 8, 9};
  for (byte i = 0; i <= 8; i++) {
    digitalWrite(led[i], HIGH);
  }
  delay(400);
  for (byte i = 0; i <= 8; i++) {
    digitalWrite(led[i], LOW);
  }
  delay(400);
}