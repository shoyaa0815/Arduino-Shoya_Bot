void connectWiFi() {
  Serial.print("Connecting to WiFi");
  WiFi.begin(name, password);
    //ssid

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nConnected!");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());
}

void setupWebServer() {
  server.on("/", HTTP_GET, []() {
    server.send(200, "text/html", R"rawliteral(
      <html><body style='text-align:center;'>
        <h2>🚗 Wi-Fi Remote Control</h2>
        <button onclick="location.href='/F'">หน้า</button><br><br>
        <button onclick="location.href='/L'">ซ้าย</button>
        <button onclick="location.href='/S'">หยุด</button>
        <button onclick="location.href='/R'">ขวา</button><br><br>
        <button onclick="location.href='/B'">หลัง</button>
      </body></html>
    )rawliteral");
  });

  server.on("/F", HTTP_GET, []() { move(1, baseSpeed, 200); server.send(200, "text/plain", "Forward"); });
  server.on("/B", HTTP_GET, []() { move(-1, baseSpeed, 200); server.send(200, "text/plain", "Backward"); });
  server.on("/L", HTTP_GET, []() { move(-2, baseSpeed, 200); server.send(200, "text/plain", "Left"); });
  server.on("/R", HTTP_GET, []() { move(2, baseSpeed, 200); server.send(200, "text/plain", "Right"); });
  server.on("/S", HTTP_GET, []() { stop_Motor(); server.send(200, "text/plain", "Stop"); });

  server.begin();
}