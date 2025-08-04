void calibrate() {
  while (true) {
    Serial.print(analogRead(26));
    Serial.print(" , ");
    Serial.println(analogRead(27));
  }
}



//white 900, 650
//black 100, 90
