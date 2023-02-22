#include <Keyboard.h>

// use this option for OSX:
char ctrlKey = KEY_LEFT_GUI;
// use this option for Windows and Linux:
//  char ctrlKey = KEY_LEFT_CTRL;

void setup() {
  delay(3000);
  Serial.begin(9600);
  // make pin 2 an input and turn on the
  // pullup resistor so it goes high unless
  // connected to ground:
  pinMode(3, INPUT_PULLUP); //JOYSTICK RIGHT
  pinMode(4, INPUT_PULLUP); //JOYSTICK LEFT
  pinMode(5, INPUT_PULLUP); //JOYSTICK DOWN
  pinMode(6, INPUT_PULLUP); //JOYSTICK UP

  pinMode(14, INPUT_PULLUP); //PLAYER 1 ATTACK
  pinMode(15, INPUT_PULLUP); //PLAYER 1 DEFEND
  pinMode(20, INPUT_PULLUP); //PLAYER 2 ATTACK
  pinMode(21, INPUT_PULLUP); //PLAYER 2 DEFEND

  // initialize control over the keyboard:
  Keyboard.begin();
}

void loop() {
  //JOYSTICK RIGHT
  if (!digitalRead(3) == HIGH) {
  Keyboard.press('d');
  Serial.println("d pressed");
  }

  //JOYSTICK LEFT
  if (!digitalRead(4) == HIGH) {
  Keyboard.press('a');
  Serial.println("a pressed");
  }

  //JOYSTICK DOWN
  if (!digitalRead(5) == HIGH) {
  Keyboard.press('s');
  Serial.println("s pressed");
  }

  //JOYSTICK UP
  if (!digitalRead(6) == HIGH) {
  Keyboard.press('w');
  Serial.println("w pressed");
  }

  if (!digitalRead(14) == HIGH) {
  Keyboard.press('e');
  Serial.println("e pressed - attack 1");
  }
  
  if (!digitalRead(15) == HIGH) {
  Keyboard.press('r');
  Serial.println("r pressed - defend 1");
  }
  delay(100);

  Keyboard.releaseAll();
  // wait for new window to open:

}