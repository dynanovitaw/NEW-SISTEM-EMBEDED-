// set pin numbers
const int buttonPin = 4; // the number of the pushbutton pin
const int ledPin = 5; // the number of the LED pin
const int buttonPin1 = 2;
const int ledPin1 = 19;
// variable for storing the pushbutton status
int buttonState = 0;
int buttonState1 = 0;
void setup() { 
 Serial.begin(115200);
 // initialize the pushbutton pin as an input
 pinMode(buttonPin, INPUT);
 pinMode(buttonPin1, INPUT);
 // initialize the LED pin as an output
 pinMode(ledPin, OUTPUT);
 pinMode(ledPin1, OUTPUT);
}
void loop() {
  
 // read the state of the pushbutton value
 buttonState = digitalRead(buttonPin);
 Serial.println(buttonState);
 // check if the pushbutton is pressed.
 // if it is, the buttonState is HIGH
 if (buttonState == HIGH) {
 // turn LED on
 digitalWrite(ledPin, HIGH);
 } else {
 // turn LED off
 digitalWrite(ledPin, LOW);
 }
 buttonState1 = digitalRead(buttonPin1);
 Serial.println(buttonState1);
 if (buttonState1 == HIGH) {
 // turn LED on
  digitalWrite(ledPin1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for a second
  digitalWrite(ledPin1, LOW);    // turn the LED off by making the voltage LOW
  delay(500);                       // wait for a second
 } else {
 // turn LED off
 digitalWrite(ledPin1 , LOW);
 }
}
