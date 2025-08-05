void setMotor(int pwmFw, int pwmBw, int speed) {
  if (speed > 0) {
    analogWrite(pwmFw, speed);
    analogWrite(pwmBw, 0);
  } else if (speed < 0) {
    analogWrite(pwmFw, 0);
    analogWrite(pwmBw, -speed);
  } else {
    analogWrite(pwmFw, 0);
    analogWrite(pwmBw, 0);
  }
}

// === ควบคุมมอเตอร์ซ้าย/ขวา ===
void motor_control(int leftSpeed, int rightSpeed) {
  setMotor(motor_Left, motor_backLeft, leftSpeed);
  setMotor(motor_Right, motor_backRight, rightSpeed);
}

// === หยุดมอเตอร์ ===
void stop_Motor() {
  motor_control(0, 0);
}


// void motor_control(int Left, int Right) {
//   if (Left > 0 and Right > 0) {
//     analogWrite(motor_Left, Left);
//     analogWrite(motor_Right, Right);
//   } else if (Left < 0 and Right < 0) {
//     analogWrite(motor_backLeft, abs(Left));
//     analogWrite(motor_Right, abs(Right));
//   } else if (Left < 0 and Right > 0) {
//     analogWrite(motor_backLeft, abs(Left));
//     analogWrite(motor_Right, Right);
//   } else if (Left > 0 and Right < 0) {
//     analogWrite(motor_Left, Left);
//     analogWrite(motor_backRight, abs(Right));
//   } else if (Left == 0 and Right > 0) {
//     analogWrite(motor_Left, 0);
//     analogWrite(motor_backLeft, 0);
//     analogWrite(motor_Right, Right);
//   } else if (Left == 0 and Right < 0) {
//     analogWrite(motor_Left, 0);
//     analogWrite(motor_backLeft, 0);
//     analogWrite(motor_backRight, abs(Right));
//   } else if (Left > 0 and Right == 0) {
//     analogWrite(motor_Left, Left);
//     analogWrite(motor_backRight, 0);
//     analogWrite(motor_Right, 0);
//   } else if (Left < 0 and Right == 0) {
//     analogWrite(motor_backLeft, abs(Left));
//     analogWrite(motor_backRight, 0);
//     analogWrite(motor_Right, 0);
//   } else if (Left == 0 and Right == 0) {
//     analogWrite(motor_Left, 0);
//     analogWrite(motor_Right, 0);
//     analogWrite(motor_backLeft, 0);
//     analogWrite(motor_backRight, 0);
//   }
// }