void trackLine() {
  while (true) {
    int left_S = analogRead(sensor_Left);
    int right_S = analogRead(sensor_Right);


    if (left_S < sensor_middle[0]) {
      motor_control(baseSpeed, baseSpeed - turnDiff);
    }
    else if (right_S < sensor_middle[1]) {
      motor_control(baseSpeed - turnDiff, baseSpeed);
    }
    else {
      motor_control(baseSpeed, baseSpeed); // ตรง
    }

    if (digitalRead(stop_bot) == 0) {
      stop_Motor();
      break;
    }

    delay(10); // เพิ่มความเสถียร
  }
}

// void trackline() {
//   while (true) {
//     if (analogRead(26) < sensor_middle[0]) {
//       motor_control(base, base-low);
//     } else if(analogRead(27) < sensor_middle[1]) {
//       motor_control(base- low, base);
//     } else if(analogRead(26) > sensor_middle[0] and analogRead(27) > sensor_middle[1]) {
//       motor_control(base, base);
//     } else {
//       stop_Motor();
//     }
//   }
// }