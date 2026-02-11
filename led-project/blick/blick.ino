void setup() {
  pinMode(12, OUTPUT); //makes pin 12 on microcontroller the output
}

void loop() {
  digitalWrite(12, HIGH); //turn light connected to 12 on

  delay(400); //0.4 second delay

  digitalWrite(12, LOW); //turns light off

  delay(400); //another 4 second delay
}
