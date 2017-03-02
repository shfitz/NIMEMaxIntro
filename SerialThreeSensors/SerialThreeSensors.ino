const int sensor0 = A0;		// sensor to control red color
const int sensor1 = A1;	// sensor to control green color
const int sensor2 = A2;		// sensor to control blue color

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print(analogRead(sensor0));
  Serial.print(",");
  Serial.print(analogRead(sensor1));
  Serial.print(",");
  Serial.println(analogRead(sensor2));
  delay(10);
}

