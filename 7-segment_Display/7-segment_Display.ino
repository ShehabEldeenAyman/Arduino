
void setup() {
for(int i = 2; i<=9 ;i++){
  pinMode(i, OUTPUT);
}
}
void loop() {
  // Turn on all the segment one by one
for(int counter1 = 2; counter1 < 10 ; counter1++){
  digitalWrite(counter1, HIGH);
  delay(500);
}
  // Turn off all the segment at once
for(int counter2 = 9; counter2 >= 2 ; counter2--){
  digitalWrite(counter2, LOW);
}
delay(500); 
}
