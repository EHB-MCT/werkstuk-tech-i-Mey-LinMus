// // Include the servo library:
#include <Servo.h>

// Create a new servo object:
Servo myservo;

// Define the servo pin:
#define servoPin 9


// Create a variable to store the servo position:
int angle = 0;


int number = 0;
int buttonState = 0;

// Create a variable
const int buttonPin = 2;
const int ledPin = 3;

void setup() {
  Serial.begin(9600);
  // Attach the Servo variable to a pin:
  myservo.attach(servoPin);

  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {

  buttonState = digitalRead(buttonPin);
  Serial.println(buttonState);

  //Hart klopping
  if (buttonState == 1) {

    for (number = 1; number <= 10; number += 1) {

      digitalWrite(ledPin, HIGH);
      delay(300);
      digitalWrite(ledPin, LOW);
      delay(300);
    }

    // Voor de dood

    myservo.write(180);

    for (number = 1; number <= 3; number += 1) {

      digitalWrite(ledPin, HIGH);
      delay(1500);
      digitalWrite(ledPin, LOW);
      delay(1500);
      digitalWrite(ledPin, LOW);
    }
    myservo.write(40);
  }
  delay(100);
}
