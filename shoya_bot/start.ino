void waitForStart() {
  stop_Motor();
  Serial.println("Waiting ");
  while (digitalRead(stop_bot) == 1) {
    delay(10); 
  }
  delay(500);
  Serial.println("Start");
}


void stop_Bot() {
  while (1) {
    if (digitalRead(stop_bot) == 0) {
      delay(1000);
      break;
    } else {
      continue;
    }
  }
}

