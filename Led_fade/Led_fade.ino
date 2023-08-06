int ledPin = 11; // define the LED pin (PWM) int brightness = 255; // initialize the LED brightness int fadeAmount = 5; // set the amount to fade by
void setup() {
  pinMode(ledPin, OUTPUT); // set the LED pin as output }
  void loop() {
    analogWrite(ledPin, brightness); // set the LED brightness using PWM
    brightness = brightness - fadeAmount; // increment/decrement the brightness by the fade amount    if (brightness <= 0 || brightness >= 255) { // if the brightness reaches minimum or maximum value
    fadeAmount = -fadeAmount; // reverse the fade amount to fade in/out   }    delay(30); // wait for a short time for the LED to change brightness }
