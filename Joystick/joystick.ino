#define VRX_PIN A0
#define VRY_PIN A1

const int ledPin = 13;

int x = 0;
int y = 0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  x = analogRead(VRX_PIN);
  y = analogRead(VRY_PIN);
  /*
  Serial.print("\nx = ");
  Serial.print(x);
  Serial.print("\ny = ");
  Serial.print(y);
  Serial.print("\n");
  delay(2000);
  */
  
  if(x == 511 && y == 514){
    digitalWrite(ledPin, HIGH);
  }else{
    digitalWrite(ledPin, LOW);
  }
}
