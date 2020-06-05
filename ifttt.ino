int led = D7;
int lightSensor = A1;
int lightData = 0;

void setup() {
    

    
    pinMode(led, OUTPUT);
    pinMode(lightSensor, INPUT);
}

void loop() {
    
  digitalWrite(led, HIGH);   // Turn ON the LED
  lightData = analogRead (lightSensor);
  
  if (lightData >= 2500)
  {
      Particle.publish("Sunlight", "Hits");
  }
  else
  {
      Particle.publish("Sunlight", "Doesn't Hit");
  }
  
    

  digitalWrite(led, LOW);    // Turn OFF the LED
  delay(10000);               // Wait for 1 seconds

}
