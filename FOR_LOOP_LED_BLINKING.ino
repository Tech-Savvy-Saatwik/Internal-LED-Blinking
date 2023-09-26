int pin1=6;
int pin2=9;
int pin1Time=500;
int pin2Time=500;
int pin1Blink=5;
int pin2Blink=3;
int j;

void setup() {
  // put your setup code here, to run once:
pinMode(pin1,OUTPUT);
pinMode(pin2,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(j=1;j<=pin1Blink;j=j+1){
digitalWrite(pin1,HIGH);
delay(pin1Time);
digitalWrite(pin1,LOW);
delay(pin1Time);
  }
  for(j=1;j<=pin2Blink;j=j+1){
digitalWrite(pin2,HIGH);
delay(pin2Time);
digitalWrite(pin2,LOW);
delay(pin2Time);
  }
}
