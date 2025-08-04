void forward(int speed) {
  motor_control(speed, speed);
}

void backward(int speed) {
  motor_control(-speed, -speed);
}

void stop_Motor() {
  motor_control(0, 0);
}


