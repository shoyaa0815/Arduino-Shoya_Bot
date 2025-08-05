void calibrate() {
  Serial.println("Place sensors on white ");
  delay(10000);
  int sensor_white_value[2];
  sensor_white_value[0] = analogRead(26);
  sensor_white_value[1] = analogRead(27);
  Serial.print("White values is: ");
  Serial.print(sensor_white_value[0]);
  Serial.print(", ");
  Serial.println(sensor_white_value[1]);

  Serial.println("Place sensors on black ");
  delay(10000);
  int sensor_black_value[2];
  sensor_black_value[0] = analogRead(26);
  sensor_black_value[1] = analogRead(27);
  Serial.print("Black values is: ");
  Serial.print(sensor_black_value[0]);
  Serial.print(", ");
  Serial.println(sensor_black_value[1]);

  // คำนวณค่ากลาง หาcalibrate
  int sensor_middle[2];
  sensor_middle[0] = (sensor_white_value[0] + sensor_black_value[0]) / 2;
  sensor_middle[1] = (sensor_white_value[1] + sensor_black_value[1]) / 2;

  Serial.print("Sensor middle values is: ");
  Serial.print(sensor_middle[0]);
  Serial.print(", ");
  Serial.println(sensor_middle[1]);

  delay(10000); // 
}






// void calibrate() {
//   while (true) {
//     Serial.print(analogRead(26));
//     Serial.print(" , ");
//     Serial.println(analogRead(27));
//   }
// }



// //white 900, 650
// //black 100, 90
