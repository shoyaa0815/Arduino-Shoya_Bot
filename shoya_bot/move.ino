void move(int direction, int speed) {
  if (direction == "Fw") { //1
    motor_control(speed, speed);
  }
  else if (direction == "Bw") { //-1
    motor_control(-speed, -speed);
  }
  else if (direction == "S") { //0
    stop_Motor();
  }
  else if (direction == "Sp_R") { //2
    motor_control(speed, -speed);
  }
  else if (direction == "Sp_L") { //-2
    motor_control(-speed, speed);
  }
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


