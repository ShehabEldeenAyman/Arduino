// Define the analog pin, the TMP36's Vout pin is connected to 
#define sensorPin A2 void setup() { 
  // Begin serial communication at 9600 baud rate 
  Serial.begin(9600); 
} void loop() { 
  // Get the voltage reading from the TMP36   int reading = analogRead(sensorPin);   // Convert that reading into voltage   // the 5 is for the 5V we take from Arduino   float voltage = reading * (5.0 / 1024.0); 
  // Convert the voltage into the temperature in Celsius   float temperatureC = (voltage - 0.5) * 100; 
  // Print the temperature in Celsius 
  Serial.print("Temperature: "); 
  Serial.print(temperatureC);   Serial.print(" C "); 
  delay(1000); // wait a second between readings 
} 
