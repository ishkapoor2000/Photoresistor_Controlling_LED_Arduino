void setup()
{
  pinMode(9, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int sensorValue = analogRead(A0) / 4;
  analogWrite(9, sensorValue);
  Serial.println(sensorValue);
  //Here, if pin-Ao is HIGH then pin-9 is HIGH else vice-versa.
}