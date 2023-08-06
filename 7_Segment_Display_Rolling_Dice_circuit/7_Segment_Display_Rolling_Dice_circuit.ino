// create a constant integer to hold the button pin value
const int buttonPin = 10;

// array to store the pin no connected to A, B, C, D, E, F, G and DP
int seven_seg[] = {4, 5, 8, 7, 6, 3, 2, 9};

// array to create binary data map for ten digits (0 to 9)
int num_array[10][7] = {{ 1, 1, 1, 1, 1, 1, 0 },  // 0
                        { 0, 1, 1, 0, 0, 0, 0 },  // 1
                        { 1, 1, 0, 1, 1, 0, 1 },  // 2
                        { 1, 1, 1, 1, 0, 0, 1 },  // 3
                        { 0, 1, 1, 0, 0, 1, 1 },  // 4
                        { 1, 0, 1, 1, 0, 1, 1 },  // 5
                        { 1, 0, 1, 1, 1, 1, 1 },  // 6
                        { 1, 1, 1, 0, 0, 0, 0 },  // 7
                        { 1, 1, 1, 1, 1, 1, 1 },  // 8
                        { 1, 1, 1, 1, 0, 1, 1 }}; // 9

int buttonState = 0;         // variable for reading the pushbutton status
       
int lastButtonState = 0;     // previous state of the button
long randNumber;

// define a function
void printNumber(int);

void setup() {
  for (int i = 0; i <= 8; i++) {
    // Defining pin modes
    pinMode(seven_seg[i], OUTPUT);
    
  }
   pinMode(10, INPUT_PULLUP);
}





void loop() {
    // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);




  // compare the buttonState to its previous state
  if (buttonState != lastButtonState) {
    if (buttonState == HIGH) {
       // print a random number from 0 to 6
  randNumber = random(0, 6);
  printNumber(randNumber);
    }
    // Delay a little bit to avoid bouncing
    delay(50);
  }
  
// save the current state as the last state, for next time through the loop
  lastButtonState = buttonState;
}
// creating a function to print numbers
void printNumber(int number) {
  int pin;
   for (int i = 0; i <= 8; i++) {
    pinMode(seven_seg[i], LOW);
  }
  for (int j = 0; j < 7; j++) {
    pin = seven_seg[j];
    digitalWrite(pin, num_array[number][j]);
  }
}
