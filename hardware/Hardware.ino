int Signal;
int beatCount = 0;
unsigned long startTime = 0;
bool measuring = false;
int Threshold = 525;
int lastPrinted = -1;

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);

  while (!Serial) { ; }
  delay(2000);
  while (Serial.available()) Serial.read();

  Serial.println("Press 'q' to start");
}

void loop() {

  if (Serial.available()) {
    char c = Serial.read();
    if (c == 'q' || c == 'Q') {

      Serial.println("3"); delay(1000);
      Serial.println("2"); delay(1000);
      Serial.println("1"); delay(1000);
      Serial.println("0"); delay(1000);

      beatCount = 0;
      startTime = millis();
      measuring = true;
      lastPrinted = -1;
    }
  }

  if (!measuring) return;

  int elapsed = (millis() - startTime) / 1000;

  if (elapsed != lastPrinted && elapsed > 0 && elapsed <= 20) {
    Serial.println(elapsed);
    lastPrinted = elapsed;
  }

  if (elapsed < 20) {
    Signal = analogRead(A0);

    static int lastSignal = 0;
    if (Signal > Threshold && lastSignal <= Threshold) {
      beatCount++;
      digitalWrite(13, HIGH);
      delay(30);
      digitalWrite(13, LOW);
    }
    lastSignal = Signal;
  }

  if (elapsed >= 20) {
    int bpm = beatCount * 3;
    Serial.print("BPM: ");
    Serial.println(bpm);
    Serial.println("Press 'q' to start");

    beatCount = 0;
    measuring = false;
    startTime = 0;
    lastPrinted = -1;
  }
}
