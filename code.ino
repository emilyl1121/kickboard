unsigned long startTime;

void setup() {
  Serial.begin(115200);       // Open Serial Monitor at 115200 baud
  delay(2000);                // Wait 2 seconds after turning on

  startTime = millis();       // Start the timer
  Serial.println("Timer started!");
}

void loop() {
  unsigned long currentTime = millis();
  unsigned long elapsed = currentTime - startTime;

  // Print elapsed time every second
  static unsigned long lastPrint = 0;
  if (currentTime - lastPrint >= 1000){
    lastPrint = currentTime;
    Serial.print("Elapsed time (ms): ");
    Serial.println(elapsed);
  }
}
