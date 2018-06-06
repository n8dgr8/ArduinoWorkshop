int LED_PIN = 6;
int ONE_UNIT_DURATION = 200;
int DAH_DURATION = 3;
int LETTER_SPACING = 3;
int WORD_SPACING = 7;

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void writeString(String string) {
  string.toUpperCase();
  for (int i=0; i < string.length(); i++){
     writeLetter(string.charAt(i));
     delay(LETTER_SPACING * ONE_UNIT_DURATION);
   }
}

void writeLetter(char c) {
  switch (c) {
    case 'A':
      dit();
      dah();
      break;
    case 'B':
      dah();
      dit();
      dit();
      dit();
      break;
    case 'C':
      dah();
      dit();
      dah();
      dit();
      break;
    case 'D':
      dah();
      dit();
      dit();
      break;
    case 'E':
      dit();
      break;
    case 'F':
      dit();
      dit();
      dah();
      dit();
      break;
    case 'G':
      dah();
      dah();
      dit();
      break;
    case 'H':
      dit();
      dit();
      dit();
      dit();
      break;
    case 'I':
      dit();
      dit();
      break;
    case 'J':
      dit();
      dah();
      dah();
      dah();
      break;
    case 'K':
      dah();
      dit();
      dah();
      break;
    case 'L':
      dit();
      dah();
      dit();
      dit();
      break;
    case 'M':
      dah();
      dah();
      break;
    case 'N':
      dah();
      dit();
      break;
    case 'O':
      dah();
      dah();
      dah();
      break;
    case 'P':
      dit();
      dah();
      dah();
      dit();
      break;
    case 'Q':
      dah();
      dah();
      dit();
      dah();
      break;
    case 'R':
      dit();
      dah();
      dit();
      break;
    case 'S':
      dit();
      dit();
      dit();
      break;
    case 'T':
      dah();
      break;
    case 'U':
      dit();
      dit();
      dah();
      break;
    case 'V':
      dit();
      dit();
      dit();
      dah();
      break;
    case 'W':
      dit();
      dah();
      dah();
      break;
    case 'X':
      dah();
      dit();
      dit();
      dah();
      break;
    case 'Y':
      dah();
      dit();
      dah();
      dah();
      break;
    case 'Z':
      dah();
      dah();
      dit();
      dit();
      break;
    case ' ':
      delay(WORD_SPACING * ONE_UNIT_DURATION);
      break;
    default:
      break;
  }
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
  writeString("Nebraska Code");
}
