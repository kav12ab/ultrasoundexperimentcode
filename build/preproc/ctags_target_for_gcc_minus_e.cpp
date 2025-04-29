# 1 "C:\\Users\\kavee\\Desktop\\MECH3890\\VSCODE\\Experiments\\ultrasound\\ultrasound.ino"
const int trigPin = 4; // Pin connected to TRIG
const int echoPin = 5; // Pin connected to ECHO
const float speedOfSound = 343.0 / 2; // Speed of sound in cm/us (divided by 2 for round-trip)

void setup() {
  Serial0.begin(9600); // Initialize Serial Monitor
  pinMode(trigPin, 0x03); // Set TRIG as output
  pinMode(echoPin, 0x01); // Set ECHO as input
}

float getDistance() {
  // Send a 10-microsecond pulse to TRIG
  digitalWrite(trigPin, 0x0);
  delayMicroseconds(2);
  digitalWrite(trigPin, 0x1);
  delayMicroseconds(10);
  digitalWrite(trigPin, 0x0);

  // Measure the time for ECHO to go HIGH
  unsigned long duration = pulseIn(echoPin, 0x1);

  // Calculate distance (duration * speed of sound / 2)
  float distance = (duration / 2.0) * 0.0343; // Convert time to cm
  return distance;
}

void loop() {
  float distance = getDistance();
  unsigned long timestamp = millis(); // Get current time in milliseconds
  Serial0.print(timestamp);
  Serial0.print(",");
  Serial0.print(distance);

  delay(500); // Wait for 500ms before the next measurement
}
