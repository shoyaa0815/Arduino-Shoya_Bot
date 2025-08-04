void stop() {
  while (1) {
    if (digitalRead(stop_bot) == 0) {
      delay(1000);
      break;
    } else {
      continue;
    }
  }
}

