int Analog_Eingang = A0;
int Digital_Eingang = 3;

void setup() {
  pinMode(Analog_Eingang, INPUT);
  pinMode(Digital_Eingang, INPUT);
  Serial.begin(9600);
}

void loop() {
  float Analog;
  int Digital;

  Analog = analogRead(Analog_Eingang) * (5.0 / 1023.0);
  Digital = digitalRead(Digital_Eingang);

  Serial.print("Analoger Spannungswert: ");
  Serial.print(Analog, 4);
  Serial.print("V, ");
  Serial.print("Grenzwert:");

  if (Digital == 1){
    Serial.println(" erreicht");
  }
  else
  {
    Serial.println(" noch nicht erreicht");
  }
  delay(200);

}
