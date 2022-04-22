//based on www.elegoo.com rev. 2016.12.9
//edited Martin Muench 2022.04.05

int adc_id = 0;
int HistoryValue = 0;
char printBuffer[128];

// wird beim Start ausgeführt
void setup()
{
  // serielle Kommunikation mit 9600 baud starten
  Serial.begin(9600);
}

// Wird nach dem Start unendlich wiederholt
void loop()
{
    // anlogen Eingang lesen und Wert speichern
    int value = analogRead(adc_id); 

    // prüfen ob neuer Wert anders ist als "alter Wert"
    if(((HistoryValue>=value) && ((HistoryValue - value) > 10)) || ((HistoryValue<value) && ((value - HistoryValue) > 10)))
    {
      // Wert ausgeben
      sprintf(printBuffer,"ADC%d-%d\n",adc_id, value);
      Serial.print(printBuffer);

      // Werta als "alten Wert speichern"
      HistoryValue = value;
    }
}
