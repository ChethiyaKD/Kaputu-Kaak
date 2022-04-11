int RELAY = 9;

void setup () {
  
  pinMode(RELAY, OUTPUT);
  
}

void loop () {
  
  digitalWrite(RELAY, HIGH); //ka
  delay(80);
  digitalWrite(RELAY, LOW);
  delay(80);
  digitalWrite(RELAY, HIGH); //pu
  delay(80);
    digitalWrite(RELAY, LOW);
  delay(80);
    digitalWrite(RELAY, HIGH); //tu
  delay(80);
    digitalWrite(RELAY, LOW);
  delay(80);
    digitalWrite(RELAY, HIGH); //kaak
  delay(350);
    digitalWrite(RELAY, LOW);
  delay(130);
    digitalWrite(RELAY, HIGH); //kaak
  delay(350);
    digitalWrite(RELAY, LOW);
  delay(130);
    digitalWrite(RELAY, HIGH); //kaak
  delay(350);
    digitalWrite(RELAY, LOW);
  delay(2200); //basil basil basil basil
}