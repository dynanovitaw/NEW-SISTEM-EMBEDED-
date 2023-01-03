// set pin numbers
const int buttonPinK = 18; // the number of the pushbutton pin
const int buttonPinM = 5; // the number of the pushbutton pin
const int buttonPinH = 19; // the number of the pushbutton pin
const int ledPinK = 2; // the number of the LED pin
const int ledPinM = 15; // the number of the LED pin
const int ledPinM2 = 21; // the number of the LED pin
const int ledPinK2 = 22; // the number of the LED pin
const int ledPinH2 = 23; // the number of the LED pin
// variable for storing the pushbutton status
int buttonStateK = 0;
int buttonStateM = 0;
int buttonStateH = 0;

void setup() {
 Serial.begin(115200);
 // initialize the pushbutton pin as an input
 pinMode(buttonPinK, INPUT);
 pinMode(buttonPinM, INPUT);
 pinMode(buttonPinH, INPUT);
 // initialize the LED pin as an output
 pinMode(ledPinK, OUTPUT);
 pinMode(ledPinM, OUTPUT);
 pinMode(ledPinK2, OUTPUT);
 pinMode(ledPinM2, OUTPUT);
 pinMode(ledPinH2, OUTPUT);
}

void loop() {
   // read the state of the pushbutton value
 buttonStateM = digitalRead(buttonPinM);
 Serial.println(buttonStateM);
 // check if the pushbutton is pressed.
 // if it is, the buttonStateM is HIGH
 if (buttonStateM == HIGH) {
 // turn LED on
 digitalWrite(ledPinM, HIGH);
 } else {
 // turn LED off
 digitalWrite(ledPinM, LOW);
 }

  // read the state of the pushbutton value
 buttonStateK = digitalRead(buttonPinK);
 Serial.println(buttonStateK);
 // check if the pushbutton is pressed.
 // if it is, the buttonStateK is HIGH
 if (buttonStateK == HIGH) {
  digitalWrite(ledPinK, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(500);                      // wait for a second
  digitalWrite(ledPinK, LOW);   // turn the LED off by making the voltage LOW
  delay(500);                      // wait for a second
 }

 // read the state of the pushbutton value
 buttonStateH = digitalRead(buttonPinH);
 Serial.println(buttonStateH);
 // check if the pushbutton is pressed.
 // if it is, the buttonStateH is HIGH
 if (buttonStateH == HIGH) {
  digitalWrite(ledPinM2, HIGH);  // turn the LED on (HIGH is the voltage level)
  digitalWrite(ledPinK2, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(ledPinH2, LOW);   // turn the LED off by making the voltage LOW
  delay(500);                      // wait for a second

  digitalWrite(ledPinM2, LOW);  // turn the LED on (HIGH is the voltage level)
  digitalWrite(ledPinK2, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(ledPinH2, LOW);   // turn the LED off by making the voltage LOW
  delay(500);                      // wait for a second

  digitalWrite(ledPinM2, LOW);  // turn the LED on (HIGH is the voltage level)
  digitalWrite(ledPinK2, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(ledPinH2, HIGH);   // turn the LED off by making the voltage LOW
  delay(500);                      // wait for a second

  digitalWrite(ledPinM2, LOW);  // turn the LED on (HIGH is the voltage level)
  digitalWrite(ledPinK2, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(ledPinH2, LOW);   // turn the LED off by making the voltage LOW
  delay(500);                      // wait for a second

  digitalWrite(ledPinM2, HIGH);  // turn the LED on (HIGH is the voltage level)
  digitalWrite(ledPinK2, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(ledPinH2, LOW);   // turn the LED off by making the voltage LOW
  delay(500); 

 } else{
  digitalWrite(ledPinM2, LOW);  // turn the LED on (HIGH is the voltage level)
  digitalWrite(ledPinK2, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(ledPinH2, LOW);   // turn the LED off by making the voltage LOW
  delay(500);                      // wait for a second

 }


}
