#include <Keyboard.h>

// use this option for OSX:
//char ctrlKey = KEY_LEFT_GUI;
// use this option for Windows and Linux:
  char ctrlKey = KEY_LEFT_CTRL;

void setup() {
  delay(3000);
  Serial.begin(9600);
  // make pin 2 an input and turn on the
  // pullup resistor so it goes high unless
  // connected to ground:
  pinMode(12, INPUT_PULLUP); //JOYSTICK RIGHT
  pinMode(11, INPUT_PULLUP); //JOYSTICK LEFT
  pinMode(9, INPUT_PULLUP); //JOYSTICK DOWN
  pinMode(10, INPUT_PULLUP); //JOYSTICK UP
  
  pinMode(6, INPUT_PULLUP); //JOYSTICK 2 RIGHT
  pinMode(5, INPUT_PULLUP); //JOYSTICK 2 LEFT
  pinMode(3, INPUT_PULLUP); //JOYSTICK 2 DOWN
  pinMode(4, INPUT_PULLUP); //JOYSTICK 2 UP

  pinMode(18, INPUT_PULLUP); //PLAYER 1 ATTACK
  pinMode(19, INPUT_PULLUP); //PLAYER 1 DEFEND
  pinMode(20, INPUT_PULLUP); //PLAYER 2 ATTACK
  pinMode(21, INPUT_PULLUP); //PLAYER 2 DEFEND

  // initialize control over the keyboard:
  Keyboard.begin();
}

void loop() {
  //JOYSTICK RIGHT player 1
  if (!digitalRead(12) == HIGH) {
  Keyboard.press('d');
  Serial.println("d pressed");
  }
  else{
    Keyboard.release('d');
  }

  //JOYSTICK LEFT player 1
  if (!digitalRead(11) == HIGH) {
  Keyboard.press('a');
  Serial.println("a pressed");
  }
  else{
    Keyboard.release('a');
  }

  //JOYSTICK DOWN player 1
  if (!digitalRead(9) == HIGH) {
  Keyboard.press('s');
  Serial.println("s pressed");
  }
  else{
    Keyboard.release('s');
  }

  //JOYSTICK UP player 1
  if (!digitalRead(10) == HIGH) {
  Keyboard.press('w');
  Serial.println("w pressed");
  }
  else{
    Keyboard.release('w');
  }

  //attack player 1
  if (!digitalRead(18) == HIGH) {
  Keyboard.press('e');
  Serial.println("e pressed - attack 1");
  }
  else{
    Keyboard.release('e');
  }

  //defend player 1
  if (!digitalRead(19) == HIGH) {
  Keyboard.press('r');
  Serial.println("r pressed - defend 1");
  }
  else{
    Keyboard.release('r');
  }



  

  //JOYSTICK RIGHT player 2
  if (!digitalRead(6) == HIGH) {
  Keyboard.press('l');
  Serial.println("l pressed");
  }
  else{
    Keyboard.release('l');
  }

  //JOYSTICK LEFT player 2
  if (!digitalRead(5) == HIGH) {
  Keyboard.press('j');
  Serial.println("j pressed");
  }
  else{
    Keyboard.release('j');
  }

  //JOYSTICK DOWN player 2
  if (!digitalRead(3) == HIGH) {
  Keyboard.press('k');
  Serial.println("k pressed");
  }
  else{
    Keyboard.release('k');
  }

  //JOYSTICK UP player 2
  if (!digitalRead(4) == HIGH) {
  Keyboard.press('i');
  Serial.println("i pressed");
  }
  else{
    Keyboard.release('i');
  }

  //attack player 2
  if (!digitalRead(20) == HIGH) {
  Keyboard.press('o');
  Serial.println("o pressed - attack 2");
  }
  else{
    Keyboard.release('o');
  }

  //defend player 1
  if (!digitalRead(21) == HIGH) {
  Keyboard.press('p');
  Serial.println("p pressed - defend 2");
  }
  else{
    Keyboard.release('p');
  }
  // wait for new window to open:

}
