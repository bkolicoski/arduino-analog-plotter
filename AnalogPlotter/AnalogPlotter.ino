/*
 * Display the analog input value on the serial plotter in Arduino IDE
 * https://youtu.be/D4rh4uw37mU
 * 
 * This code is written by Blagojce Kolicoski
 * for the Taste The Code YouTube Channel
 * https://www.youtube.com/tastethecode
 */
const int analogInPin = A3;

int sensorValue = 0;

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(analogInPin);
  Serial.println(sensorValue);

  // wait 2 milliseconds before the next loop for the analog-to-digital
  // converter to settle after the last reading:
  delay(2);
}
