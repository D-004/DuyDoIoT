int pin1 = 2;
int pin2 = 3;
int pin3 = 4;
int pin4 = 5;
int button1 = 6;
int button2 = 7;
int button3 = 8;

bool ham1 = false;
bool ham2 = false;


void setup() {
  // put your setup code here, to run once:
  for (int i = 2; i < 6; i++) {
    pinMode(i, OUTPUT);
  }
  for (int i = 6; i < 9; i++) {
    pinMode(i, INPUT_PULLUP);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonStatus1 = digitalRead(button1);
  int buttonStatus2 = digitalRead(button2);
  int buttonStatus3 = digitalRead(button3);

  if (buttonStatus1 == LOW) {
    while (buttonStatus1 == LOW) {
      ham1 = true;
      ham2 = false;
    }
  }
  if (buttonStatus2 == LOW) {
    while (buttonStatus2 == LOW) {
      ham1 = false;
      ham2 = true;
    }
  }
  if (buttonStatus1 == LOW) {
    while (buttonStatus1 == LOW) {
      ham1 = false;
      ham2 = false;
    }
  }
  if (ham1 == true) {
    digitalWrite(pin1, HIGH);
    delay(100);
    digitalWrite(pin1, LOW);
    digitalWrite(pin2, HIGH);
    delay(100);
    digitalWrite(pin2, LOW);
    digitalWrite(pin3, HIGH);
    delay(100);
    digitalWrite(pin3, LOW);
    digitalWrite(pin4, HIGH);
    delay(100);
    digitalWrite(pin4, LOW);
  }
  if (ham2 == true) {
    digitalWrite(pin1, HIGH);
    digitalWrite(pin2, HIGH);
    digitalWrite(pin3, HIGH);
    digitalWrite(pin4, HIGH);
    delay(100);
    digitalWrite(pin1, LOW);
    digitalWrite(pin2, LOW);
    digitalWrite(pin3, LOW);
    digitalWrite(pin4, LOW);
  }
}
