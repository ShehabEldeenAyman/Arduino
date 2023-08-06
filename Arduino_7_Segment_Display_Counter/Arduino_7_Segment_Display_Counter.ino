int pin_arr[] = {4, 5, 8, 7, 6, 3, 2};
int num_array[10][7] = {{ 1, 1, 1, 1, 1, 1, 0 },  // display 0
                        { 0, 1, 1, 0, 0, 0, 0 },  // display 1
                        { 1, 1, 0, 1, 1, 0, 1 },  // display 2
                        { 1, 1, 1, 1, 0, 0, 1 },  // display 3
                        { 0, 1, 1, 0, 0, 1, 1 },  // display 4
                        { 1, 0, 1, 1, 0, 1, 1 },  // display 5
                        { 1, 0, 1, 1, 1, 1, 1 },  // display 6
                        { 1, 1, 1, 0, 0, 0, 0 },  // display 7
                        { 1, 1, 1, 1, 1, 1, 1 },  // display 8
                        { 1, 1, 1, 1, 0, 1, 1 }}; // display 9

void printNumber(int); // remember function prototyping

void setup() {
  for (int i = 0; i < 7; i++) {
    pinMode(pin_arr[i], OUTPUT);
  }
}
void loop() {
  // creating a for loop which counts from 0 to 9
  for (int num = 0; num < 10; num++) {
    printNumber(num);
    delay(1000);
  }
}// creating a function to print numbers
void printNumber(int number) {
  for (int j = 0; j < 7; j++) {
    digitalWrite(pin_arr[j], num_array[number][j]);
  }
}
