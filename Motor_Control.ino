#include <Servo.h>
Servo servo1;
int a = 0;
void setup() {
  // put your setup code here, to run once:
servo1.attach(9);
servo1.write(100);
}

void loop() {
  // put your main code here, to run repeatedly:
servo1.write(a);
a = a + 50;
}
