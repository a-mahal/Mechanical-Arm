#include <Servo.h>             /* need this library for servo syntax */
Servo myservo;

int servo = 8;                 /* ? */
long duration, cm, inches;     /* ? */

void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(8, OUTPUT);
  myservo.attach(8);             /* attaches servo to signal pin on board */


}

void loop() {

  int T = analogRead(A0);        /* sets variable T to the analog port on board */

  T = map(T, 0, 1023, 0, 180);   /* changes analog readings to 0-180 degrees*/
  int A = T;
  Serial.println(T);             /* lgs what the value of T is */

  myservo.write(T);              /* controls servo position*/
  /* hello8*/
}
