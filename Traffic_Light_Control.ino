
#define GREEN_PIN 8
#define YELLOW_PIN 10
#define RED_PIN 12

// Delay values in milliseconds
int red_on = 6000;
int green_on = 3000;
int yellow_blink = 500;

void setup() {
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(YELLOW_PIN, OUTPUT);
  pinMode(RED_PIN, OUTPUT);
}

void loop() {
  // Green LED ON for 3 seconds
  digitalWrite(GREEN_PIN, HIGH);
  delay(green_on);
  digitalWrite(GREEN_PIN, LOW);

  // Yellow LED blinks 4 times
  for (int i = 0; i < 4; i++) {
    digitalWrite(YELLOW_PIN, HIGH);
    delay(yellow_blink);

    digitalWrite(YELLOW_PIN, LOW);
    delay(yellow_blink);
  }

  // Red LED ON for 6 seconds
  digitalWrite(RED_PIN, HIGH);
  delay(red_on);
  digitalWrite(RED_PIN, LOW);
}
