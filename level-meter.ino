
int ledPin5 = 5;
int ledPin6 = 6;
int ledPin9 = 9;
int sensorPin = A0;
int sensorValue = 0;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
    Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  if (sensorValue > 0 && sensorValue < 255.75) digitalWrite(5, HIGH);
  if (sensorValue > 255.75 && sensorValue < 511.5) digitalWrite(6, HIGH);
  if (sensorValue > 511.5 && sensorValue < 767.25) digitalWrite(9, HIGH);   
}
                  
