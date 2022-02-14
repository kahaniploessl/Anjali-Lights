//set analog Pin
int ledPin = 9; 
//rate of change
int x = 1;
//initial brightness 
int volts = 2;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  //increase brightness
  volts+=x;
  delay(10);
  
  if (volts>250||volts<1) {
    //if brightness hits the cap, multiple rate by -1 to switch direction
    x=x*(-1);
  } 
    
  Serial.println(volts);
  analogWrite(ledPin, volts);
}
