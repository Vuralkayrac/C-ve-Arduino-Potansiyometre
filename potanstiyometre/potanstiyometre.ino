#define potpin A0
int deger = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Pot Değer Okuma");
}

void loop() {
  // put your main code here, to run repeatedly:
  deger = analogRead(potpin);
  Serial.println(deger);
  delay(300);
}
