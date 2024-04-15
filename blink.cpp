// Define the pin for the LED
const int ledPin = 13; 

const int dotDelay = 500; 
const int dashDelay = 1500; 

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  blinkMorse('E');
  blinkMorse('S');
  blinkMorse('W');
  blinkMorse('A');
  blinkMorse('R');

}

// Function to blink a single Morse code character
void blinkMorse(char letter) {
  switch (letter) {
    case 'A':
    case 'a':
      dot(); dash();
      break;
    case 'B':
    case 'b':
      dash(); dot(); dot(); dot();
      break;
    case 'C':
    case 'c':
      dash(); dot(); dash(); dot();
      break;
    case 'D':
    case 'd':
      dash(); dot(); dot();
      break;
    case 'E':
    case 'e':
      dot();
      break;
    case 'F':
    case 'f':
      dot(); dot(); dash(); dot();
      break;
    case 'G':
    case 'g':
      dash(); dash(); dot();
      break;
    case 'H':
    case 'h':
      dot(); dot(); dot(); dot();
      break;
    case 'I':
    case 'i':
      dot(); dot();
      break;
    case 'J':
    case 'j':
      dot(); dash(); dash(); dash();
      break;
    case 'K':
    case 'k':
      dash(); dot(); dash();
      break;
    case 'L':
    case 'l':
      dot(); dash(); dot(); dot();
      break;
    case 'M':
    case 'm':
      dash(); dash();
      break;
    case 'N':
    case 'n':
      dash(); dot();
      break;
    case 'O':
    case 'o':
      dash(); dash(); dash();
      break;
    case 'P':
    case 'p':
      dot(); dash(); dash(); dot();
      break;
    case 'Q':
    case 'q':
      dash(); dash(); dot(); dash();
      break;
    case 'R':
    case 'r':
      dot(); dash(); dot();
      break;
    case 'S':
    case 's':
      dot(); dot(); dot();
      break;
    case 'T':
    case 't':
      dash();
      break;
    case 'U':
    case 'u':
      dot(); dot(); dash();
      break;
    case 'V':
    case 'v':
      dot(); dot(); dot(); dash();
      break;
    case 'W':
    case 'w':
      dot(); dash(); dash();
      break;
    case 'X':
    case 'x':
      dash(); dot(); dot(); dash();
      break;
    case 'Y':
    case 'y':
      dash(); dot(); dash(); dash();
      break;
    case 'Z':
    case 'z':
      dash(); dash(); dot(); dot();
      break;
    default:
      // If character not found, just delay for a space
      delay(dotDelay * 4);
      break;
  }
}

// Function to turn on LED for dot duration
void dot() {
  digitalWrite(ledPin, HIGH);
  delay(dotDelay);
  digitalWrite(ledPin, LOW);
  delay(dotDelay);
}

// Function to turn on LED for dash duration
void dash() {
  digitalWrite(ledPin, HIGH);
  delay(dashDelay);
  digitalWrite(ledPin, LOW);
  delay(dotDelay);
}
