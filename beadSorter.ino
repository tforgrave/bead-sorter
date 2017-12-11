#define relayPin1 13
#define relayPin2 12
#define relayPin3 11
#define relayPin4 10
#define relayPin5 9
#define relayPin6 8
#define relayPin7 7
#define relayPin8 6
#define myDelay 250

void setup() {
  // put your setup code here, to run once:
  //Set digital pins to output so we can sink
  //any current supplied to them
  digitalWrite(relayPin1, HIGH);
  digitalWrite(relayPin2, HIGH);
  digitalWrite(relayPin3, HIGH);
  digitalWrite(relayPin4, HIGH);
  digitalWrite(relayPin5, HIGH);
  digitalWrite(relayPin6, HIGH);
  digitalWrite(relayPin7, HIGH);
  digitalWrite(relayPin8, HIGH);
  
  pinMode(relayPin1, OUTPUT);
  pinMode(relayPin2, OUTPUT);
  pinMode(relayPin3, OUTPUT);
  pinMode(relayPin4, OUTPUT);
  pinMode(relayPin5, OUTPUT);
  pinMode(relayPin6, OUTPUT);
  pinMode(relayPin7, OUTPUT);  
  pinMode(relayPin8, OUTPUT);  

  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(relayPin1, LOW);
  digitalWrite(relayPin2, HIGH);
  digitalWrite(relayPin3, HIGH);
  digitalWrite(relayPin4, HIGH);
  digitalWrite(relayPin5, HIGH);
  digitalWrite(relayPin6, HIGH);
  digitalWrite(relayPin7, HIGH);
  digitalWrite(relayPin8, HIGH);
  
  delay(myDelay);
  
  digitalWrite(relayPin1, HIGH);
  digitalWrite(relayPin2, LOW);
  digitalWrite(relayPin3, HIGH);
  digitalWrite(relayPin4, HIGH);
  digitalWrite(relayPin5, HIGH);
  digitalWrite(relayPin6, HIGH);
  digitalWrite(relayPin7, HIGH);
  digitalWrite(relayPin8, HIGH);
  
    delay(myDelay);
  
  digitalWrite(relayPin1, HIGH);
  digitalWrite(relayPin2, HIGH);
  digitalWrite(relayPin3, LOW);
  digitalWrite(relayPin4, HIGH);
  digitalWrite(relayPin5, HIGH);
  digitalWrite(relayPin6, HIGH);
  digitalWrite(relayPin7, HIGH);
  digitalWrite(relayPin8, HIGH);
  
    delay(myDelay);
  
  digitalWrite(relayPin1, HIGH);
  digitalWrite(relayPin2, HIGH);
  digitalWrite(relayPin3, HIGH);
  digitalWrite(relayPin4, LOW);
  digitalWrite(relayPin5, HIGH);
  digitalWrite(relayPin6, HIGH);
  digitalWrite(relayPin7, HIGH);
  digitalWrite(relayPin8, HIGH);
  
    delay(myDelay);
  
  digitalWrite(relayPin1, HIGH);
  digitalWrite(relayPin2, HIGH);
  digitalWrite(relayPin3, HIGH);
  digitalWrite(relayPin4, HIGH);
  digitalWrite(relayPin5, LOW);
  digitalWrite(relayPin6, HIGH);
  digitalWrite(relayPin7, HIGH);
  digitalWrite(relayPin8, HIGH);
  
    delay(myDelay);
  
  digitalWrite(relayPin1, HIGH);
  digitalWrite(relayPin2, HIGH);
  digitalWrite(relayPin3, HIGH);
  digitalWrite(relayPin4, HIGH);
  digitalWrite(relayPin5, HIGH);
  digitalWrite(relayPin6, LOW);
  digitalWrite(relayPin7, HIGH);
  digitalWrite(relayPin8, HIGH);

    delay(myDelay);
  
  digitalWrite(relayPin1, HIGH);
  digitalWrite(relayPin2, HIGH);
  digitalWrite(relayPin3, HIGH);
  digitalWrite(relayPin4, HIGH);
  digitalWrite(relayPin5, HIGH);
  digitalWrite(relayPin6, HIGH);
  digitalWrite(relayPin7, LOW);
  digitalWrite(relayPin8, HIGH);
  
      delay(myDelay);
  
  digitalWrite(relayPin1, HIGH);
  digitalWrite(relayPin2, HIGH);
  digitalWrite(relayPin3, HIGH);
  digitalWrite(relayPin4, HIGH);
  digitalWrite(relayPin5, HIGH);
  digitalWrite(relayPin6, HIGH);
  digitalWrite(relayPin7, HIGH);
  digitalWrite(relayPin8, LOW);
  
  delay(myDelay);
}
