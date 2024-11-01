const int BTN = 2;

bool is_on = true;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(BTN, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // if (digitalRead(BTN) == LOW){
  //   is_on = !is_on;
  //   delay(100);
  // }
  // if (is_on){
  //   Serial.println("On");
  // } else {
  //   Serial.println("Off");
  // }
  Serial.println(digitalRead(BTN));
  delay(1000);
}
