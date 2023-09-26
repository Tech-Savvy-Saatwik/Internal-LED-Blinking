int pin1=6;
int pin2=9;
int pin1Time=500;
int pin2Time=500;

void setup() {
  // put your setup code here, to run once:
pinMode(pin1,OUTPUT);
pinMode(pin2,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(pin1,HIGH);
delay(pin1Time);
digitalWrite(pin1,LOW);
delay(pin1Time);

digitalWrite(pin1,HIGH);
delay(pin1Time);
digitalWrite(pin1,LOW);
delay(pin1Time);

digitalWrite(pin1,HIGH);
delay(pin1Time);
digitalWrite(pin1,LOW);
delay(pin1Time);

digitalWrite(pin2,HIGH);
delay(pin2Time);
digitalWrite(pin2,LOW);
delay(pin2Time);

digitalWrite(pin2,HIGH);
delay(pin2Time);
digitalWrite(pin2,LOW);
delay(pin2Time);

digitalWrite(pin2,HIGH);
delay(pin2Time);
digitalWrite(pin2,LOW);
delay(pin2Time);

digitalWrite(pin2,HIGH);
delay(pin2Time);
digitalWrite(pin2,LOW);
delay(pin2Time);

digitalWrite(pin2,HIGH);
delay(pin2Time);
digitalWrite(pin2,LOW);
delay(pin2Time);
}
