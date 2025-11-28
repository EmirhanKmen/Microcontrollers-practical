int led = 9;
int pot = A0;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  int deger = analogRead(pot);     // 0 - 1023
  int parlaklik = map(deger, 0, 1023, 0, 255); // PWM için dönüştürme
  
  analogWrite(led, parlaklik);     // LED parlaklığını ayarla
}
