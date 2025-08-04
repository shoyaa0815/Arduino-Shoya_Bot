void motor_control(int Left, int Right) {
  if (Left > 0 and Right > 0) {
    analogWrite(motor_Left, Left);
    analogWrite(motor_Right, Right);
  } else if (Left < 0 and Right < 0) {
    analogWrite(motor_backLeft, abs(Left));
    analogWrite(motor_Right, abs(Right));
  } else if (Left < 0 and Right > 0) {
    analogWrite(motor_backLeft, abs(Left));
    analogWrite(motor_Right, Right);
  } else if (Left > 0 and Right < 0) {
    analogWrite(motor_Left, Left);
    analogWrite(motor_backRight, abs(Right));
  } else if (Left == 0 and Right > 0) {
    analogWrite(motor_Left, 0);
    analogWrite(motor_backLeft, 0);
    analogWrite(motor_Right, Right);
  } else if (Left == 0 and Right < 0) {
    analogWrite(motor_Left, 0);
    analogWrite(motor_backLeft, 0);
    analogWrite(motor_backRight, abs(Right));
  } else if (Left > 0 and Right == 0) {
    analogWrite(motor_Left, Left);
    analogWrite(motor_backRight, 0);
    analogWrite(motor_Right, 0);
  } else if (Left < 0 and Right == 0) {
    analogWrite(motor_backLeft, abs(Left));
    analogWrite(motor_backRight, 0);
    analogWrite(motor_Right, 0);
  } else if (Left == 0 and Right == 0) {
    analogWrite(motor_Left, 0);
    analogWrite(motor_Right, 0);
    analogWrite(motor_backLeft, 0);
    analogWrite(motor_backRight, 0);
  }
}