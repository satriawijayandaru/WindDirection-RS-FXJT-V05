#define hwserial Serial
#define sensorPin A0

int sensorData;

void setup() {
  hwserial.begin(115200);
  delay(100);
  hwserial.println("Boot Complete");
  pinMode(sensorPin, INPUT);
}

void loop() {
  readSensor();
  delay(100);
}

void readSensor() {
  sensorData = analogRead(sensorPin);
  Serial.print("Sensor Data = ");
  Serial.println(sensorData);
}
