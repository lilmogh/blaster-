const int pinX = A0;
const int pinY = A1;
const int pinBtn = 2;

void setup() {
  Serial.begin(115200); // High baud rate for low latency
  pinMode(pinBtn, INPUT_PULLUP); // Use internal pull-up resistor
}

void loop() {
  int xVal = analogRead(pinX);
  int yVal = analogRead(pinY);
  int btnVal = digitalRead(pinBtn); // 0 when pressed, 1 when unpressed

  // Send data formatted as: X,Y,BUTTON
  Serial.print(xVal);
  Serial.print(",");
  Serial.print(yVal);
  Serial.print(",");
  Serial.println(btnVal);

  delay(20); // ~50 updates per second
}