void move(int direction, int speed, int car_delay) {
  if (direction == 1) {  //Fw
    motor_control(speed + balanceL, speed + balanceR);
  } else if (direction == -1) {  //Bw
    motor_control(-speed - balanceL, -speed - balanceR);
  } else if (direction == 0) {  //s
    stop_Motor();
  } else if (direction == 2) {  //Sp_R
    motor_control(speed + balanceL, -speed - balanceR);
  } else if (direction == -2) {  //Sp_L
    motor_control(-speed - balanceL, speed + balanceR);
  }
  delay(car_delay);
  stop_Motor();
}




// void forward(int speed) {
//   motor_control(speed, speed);
// }

// void backward(int speed) {
//   motor_control(-speed, -speed);
// }

// void stop_Motor() {
//   motor_control(0, 0);
// }
