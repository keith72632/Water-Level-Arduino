const int readPin = A1;
const int outPin = 10;
int signal = 0;
int delayTime = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(outPin, OUTPUT);
  pinMode(readPin, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(outPin, HIGH);
  signal = analogRead(readPin);
  Serial.println(signal);
  delay(delayTime);

}
