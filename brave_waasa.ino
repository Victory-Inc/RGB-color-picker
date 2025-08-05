const int redPin = 6;
const int greenPin = 10;
const int bluePin = 11;

void setup() {
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  if (Serial.available()) {
    String command = Serial.readStringUntil('\n');
    command.trim();

    if (command == "red") {
      setColor(255, 0, 0);
    } else if (command == "green") {
      setColor(0, 255, 0);
    } else if (command == "blue") {
      setColor(0, 0, 255);
       } else if (command == "purple") {
      setColor(255, 0, 255);
       } else if (command == "white") {
      setColor(255, 255, 255);
       } else if (command == "indego") {
      setColor(64, 0, 255);
       } else if (command == "pink") {
      setColor(255, 0, 128);
      } else if (command == "yellow") {
      setColor(255, 128, 0);
      } else if (command == "sky") {
      setColor(0, 255, 128);
    } else if (command=="lime") {
      setColor(255, 255, 0);
    } else if (command == "off") {
      setColor(0, 0, 0);
    } else {
      Serial.println("Unknown command.");
    }
  }
}

void setColor(int r, int g, int b) {
  analogWrite(redPin, r);
  analogWrite(greenPin, g);
  analogWrite(bluePin, b);
}
