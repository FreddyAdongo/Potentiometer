int sensorPin = A0;
int ledPin = 13;

void setup()
{


  pinMode(ledPin, OUTPUT);


}


void loop()
{


  int pot;



  pot = analogRead(A0);



  digitalWrite(13, HIGH);

  delay(500);

  digitalWrite(13, LOW);

  delay(500);


}


