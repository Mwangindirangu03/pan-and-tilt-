#include <Servo.h>

Servo servo_pan;
Servo servo_tilt;

int pos_pan = 0;
int pos_tilt = 0;

void setup() {
  servo_pan.attach(26);
  servo_tilt.attach(28);
}

void loop() {
  for (int cycles = 0; cycles <=5; cycles +=1) {
    for (pos_tilt = 0; pos_tilt <= 40; pos_tilt += 1) {
      servo_tilt.write(pos_tilt);
      delay(10);
    }

     delay(5000);

    for (pos_tilt = 40; pos_tilt >= 0; pos_tilt -= 1) {
      servo_tilt.write(pos_tilt);
      delay(10);
    }


    for (pos_pan = 0; pos_pan <= 70; pos_pan += 1) {
      servo_pan.write(pos_pan);
      delay(15);
    }

  

    for (pos_tilt = 0; pos_tilt <= 40; pos_tilt += 1) {
      servo_tilt.write(pos_tilt);
      delay(10);
    }

    delay(5000);
    for (pos_tilt = 40; pos_tilt >= 0; pos_tilt -= 1) {
      servo_tilt.write(pos_tilt);
      delay(10);
    }

    for (pos_pan = 70; pos_pan <= 150; pos_pan += 1) {
      servo_pan.write(pos_pan);
      delay(15);
    }

    
    for (pos_tilt = 0; pos_tilt <= 40; pos_tilt += 1) {
      servo_tilt.write(pos_tilt);
      delay(10);
    }

    delay(5000);
    for (pos_tilt = 40; pos_tilt >= 0; pos_tilt -= 1) {
      servo_tilt.write(pos_tilt);
      delay(10);
    }

    for (pos_pan = 150; pos_pan >= 0; pos_pan -= 1) {
      servo_pan.write(pos_pan);
      delay(15);
    }
  }
  Serial.print("End of cycles!!!");
}