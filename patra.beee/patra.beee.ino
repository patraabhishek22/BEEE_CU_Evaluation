const int pResistor=A0;
const int ledPin=9;
int value;
void setup() {
  pinMode(ledPin,OUTPUT);
  pinMode(pResistor,INPUT);
  // put your setup code here, to run once:

}

void loop() {
  value=analogRead(pResistor);

  if(value>25)
  {
    digitalWrite(ledPin,HIGH);
    delay(10);
    digitalWrite(ledPin,LOW);
  }
  else
  {
    digitalWrite(ledPin,HIGH);
    delay(20);
    digitalWrite(ledPin,LOW);
  }
  delay(500);
  // put your main code here, to run repeatedly:

}
