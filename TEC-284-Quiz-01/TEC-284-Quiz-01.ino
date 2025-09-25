
int redButton = 10;
int greenButton = 9;
int blueButton = 8;


int redLED = 2;
int greenLED = 3;
int blueLED = 4;

void setup() {
  //button set up
  pinMode(redButton, INPUT_PULLUP);
  pinMode(greenButton, INPUT_PULLUP);
  pinMode(blueButton, INPUT_PULLUP);

//LED outputs
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);

  Serial.begin(9600);
  Serial.println("Program Started");

}

void loop() {
  // put your main code here, to run repeatedly:

  displayRGBLED();


}

void displayRGBLED() {

  int redState = digitalRead(redButton);
  int greenState = digitalRead(greenButton);
  int blueState = digitalRead(blueButton);

  if (redState == LOW && greenState == LOW && blueState == LOW) {
    //When all buttons are pressed, it creates a white light

    digitalWrite(redLED, HIGH);
    digitalWrite(greenLED, HIGH);
    digitalWrite(blueLED, HIGH);
    Serial.println("White");

  } else if (redState == LOW && greenState == LOW && blueState == HIGH){
    //When only the red and green buttons are pressed, it creates a yellow light

    digitalWrite(redLED, HIGH);
    digitalWrite(greenLED, HIGH);
    digitalWrite(blueLED, LOW);
    Serial.println("Yellow");
  } else if (redState == LOW && greenState == HIGH && blueState == LOW){
    //When only the red and blue buttons are pressed, it creates a purple light
    digitalWrite(redLED, HIGH);
    digitalWrite(greenLED, LOW);
    digitalWrite(blueLED, HIGH);
    Serial.println("Purple");
  } else if (redState == HIGH && greenState == LOW && blueState == LOW){
    //When the green and blue buttons are pressed, it creates a teal light
    digitalWrite(redLED, LOW);
    digitalWrite(greenLED, HIGH);
    digitalWrite(blueLED, HIGH);
    Serial.println("Teal");
  } else if (redState == LOW && greenState == HIGH && blueState == HIGH){
    //When the red button is pressed, it creates red light
    digitalWrite(redLED, HIGH);
    digitalWrite(greenLED, LOW);
    digitalWrite(blueLED, LOW);
    Serial.println("Red");
  } else if (redState == HIGH && greenState == LOW && blueState == HIGH){
    //When the green button is pressed, it creates a green light
    digitalWrite(redLED, LOW);
    digitalWrite(greenLED, HIGH);
    digitalWrite(blueLED, LOW);
    Serial.println("Green");
  } else if (redState == HIGH && greenState == HIGH && blueState == LOW){
    //When the blue button is pressed, it creates a blue light 
    digitalWrite(redLED, LOW);
    digitalWrite(greenLED, LOW);
    digitalWrite(blueLED, HIGH);
    Serial.println("Blue");
  }
}
