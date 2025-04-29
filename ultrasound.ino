const int trigPin = 4;  // Pin connected to TRIG
const int echoPin = 5; // Pin connected to ECHO
const float speedOfSound = 343.0 / 2; // Speed of sound in cm/us (divided by 2 for round-trip)

void setup() {
  Serial.begin(9600); // Initialize Serial Monitor
  pinMode(trigPin, OUTPUT); // Set TRIG as output
  pinMode(echoPin, INPUT);  // Set ECHO as input
}

float getDistance() {
  // Send a 10-microsecond pulse to TRIG
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Measure the time for ECHO to go HIGH
  unsigned long duration = pulseIn(echoPin, HIGH);

  // Calculate distance (duration * speed of sound / 2)
  float distance = (duration / 2.0) * 0.0343; // Convert time to cm
  return distance;
}

void loop() {
  float distance = getDistance();
  unsigned long timestamp = millis(); // Get current time in milliseconds
  Serial.print(timestamp);
  Serial.print(",");
  Serial.print(distance);

  delay(500); // Wait for 500ms before the next measurement
}

