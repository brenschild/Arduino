
// Button Code
const int buttonPin = 10;
const int Pin6 = 6;

int buttonState = 0;      

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(Pin6, OUTPUT);
}

void loop() {
  
  pinMode(Pin6, HIGH);
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    Serial.write("Pushed\n");
  } else {
    Serial.write("NotPushed\n");
  }
}
