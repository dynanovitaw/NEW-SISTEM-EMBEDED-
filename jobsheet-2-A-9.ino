// set pin numbers
const int touchPin = 4; 
const int ledPin = 16;
const int ledPin1 = 17;
const int ledPin2 = 18;

// change with your threshold value
const int threshold = 20;
// variable for storing the touch pin value 
int touchValue;

void setup(){
  Serial.begin(115200);
  delay(1000); // give me time to bring up serial monitor
  // initialize the LED pin as an output:
  pinMode (ledPin, OUTPUT);
  pinMode (ledPin1, OUTPUT);
  pinMode (ledPin2, OUTPUT);
}

void loop(){
  // read the state of the pushbutton value:
  touchValue = touchRead(touchPin);
  Serial.print(touchValue);
  // check if the touchValue is below the threshold
  // if it is, set ledPin to HIGH
  if(touchValue < threshold){
    // turn LED on
    digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
    Serial.println(" - LED on");
    digitalWrite(ledPin1, LOW);   // turn the LED on (HIGH is the voltage level)
    Serial.println(" - LED off");
    digitalWrite(ledPin2, LOW);   // turn the LED on (HIGH is the voltage level)
    Serial.println(" - LED off");
    delay(500);                       // wait for a second
    digitalWrite(ledPin, LOW);   // turn the LED on (HIGH is the voltage level)
    Serial.println(" - LED off");
    digitalWrite(ledPin1, HIGH);   // turn the LED on (HIGH is the voltage level)
    Serial.println(" - LED on");
    digitalWrite(ledPin2, LOW);   // turn the LED on (HIGH is the voltage level)
    Serial.println(" - LED off");
    delay(500);                       // wait for a second
    digitalWrite(ledPin, LOW);   // turn the LED on (HIGH is the voltage level)
    Serial.println(" - LED off");
    digitalWrite(ledPin1, LOW);   // turn the LED on (HIGH is the voltage level)
    Serial.println(" - LED off");
    digitalWrite(ledPin2, HIGH);   // turn the LED on (HIGH is the voltage level)
    Serial.println(" - LED on");
    delay(500);                       // wait for a second
    digitalWrite(ledPin, LOW);   // turn the LED on (HIGH is the voltage level)
    Serial.println(" - LED off");
    digitalWrite(ledPin1, LOW);   // turn the LED on (HIGH is the voltage level)
    Serial.println(" - LED off");
    digitalWrite(ledPin2, HIGH);   // turn the LED on (HIGH is the voltage level)
    Serial.println(" - LED on");
    delay(500);                       // wait for a second
    digitalWrite(ledPin, LOW);   // turn the LED on (HIGH is the voltage level)
    Serial.println(" - LED off");
    digitalWrite(ledPin1, HIGH);   // turn the LED on (HIGH is the voltage level)
    Serial.println(" - LED on");
    digitalWrite(ledPin2, LOW);   // turn the LED on (HIGH is the voltage level)
    Serial.println(" - LED off");
    delay(500);                       // wait for a second
    digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
    Serial.println(" - LED on");
    digitalWrite(ledPin1, LOW);   // turn the LED on (HIGH is the voltage level)
    Serial.println(" - LED off");
    digitalWrite(ledPin2, LOW);   // turn the LED on (HIGH is the voltage level)
    Serial.println(" - LED off");
    delay(500);                       // wait for a second
  }
  else{
    // turn LED off
    digitalWrite(ledPin, LOW);
    Serial.println(" - LED off");
    digitalWrite(ledPin1, LOW);
    Serial.println(" - LED off");
    digitalWrite(ledPin2, LOW);
    Serial.println(" - LED off");
  }
  delay(500);
}
