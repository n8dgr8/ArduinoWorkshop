int LED_PIN = 6;
int ONE_UNIT_DURATION = 200;
int DAH_DURATION = 3;
int LETTER_SPACING = 3;
int WORD_SPACING = 7;

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void dit() {
  digitalWrite(LED_PIN, HIGH);
  delay(ONE_UNIT_DURATION);
  digitalWrite(LED_PIN, LOW);
  delay(ONE_UNIT_DURATION);
}

void dah() {
  digitalWrite(LED_PIN, HIGH);
  delay(DAH_DURATION * ONE_UNIT_DURATION);
  digitalWrite(LED_PIN, LOW);
  delay(ONE_UNIT_DURATION);
}

void loop() {

  dah();
  dit();

  delay(LETTER_SPACING * ONE_UNIT_DURATION);

  dit();

  delay(LETTER_SPACING * ONE_UNIT_DURATION);

  dah();
  dit();
  dit();
  dit();

  delay(LETTER_SPACING * ONE_UNIT_DURATION);

  dit();
  dah();
  dit();

  delay(LETTER_SPACING * ONE_UNIT_DURATION);

  dit();
  dah();

  delay(LETTER_SPACING * ONE_UNIT_DURATION);

  dit();
  dit();
  dit();

  delay(LETTER_SPACING * ONE_UNIT_DURATION);

  dah();
  dit();
  dah();

  delay(LETTER_SPACING * ONE_UNIT_DURATION);

  dit();
  dah();
  
  delay(WORD_SPACING * ONE_UNIT_DURATION);

  dah();
  dit();
  dah();
  dit();

  delay(LETTER_SPACING * ONE_UNIT_DURATION);

  dah();
  dah();
  dah();

  delay(LETTER_SPACING * ONE_UNIT_DURATION);

  dah();
  dit();
  dit();

  delay(LETTER_SPACING * ONE_UNIT_DURATION);

  dit();

  delay(WORD_SPACING * ONE_UNIT_DURATION);
}
