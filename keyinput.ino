int pinOne = 2;
int pinTwo = 3;

int buttonFirst = 0;
int buttonSecond = 0;

unsigned long lastTimeFirst = 0;
unsigned long lastTimeSecond = 0;
unsigned long delayTime = 200;

void setup() {
  Serial.begin(9600); 
  pinMode(pinOne,INPUT);
  pinMode(pinTwo,INPUT);
}
 
void loop() {
  buttonFirst = digitalRead(pinOne);
  buttonSecond = digitalRead(pinTwo);

  if (buttonFirst == HIGH)
  {
    if (millis() - lastTimeFirst > delayTime) {
      Serial.println("A");
      lastTimeFirst = millis();
    }
  }

  if (buttonSecond == HIGH)
  {
    if (millis() - lastTimeSecond > delayTime) {
      Serial.println("B");
      lastTimeSecond = millis();
    }
  }
}
