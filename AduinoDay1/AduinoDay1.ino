

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
 for(int i=7; i>2; i--)pinMode(i,OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  for(int i=7 ; i>2; i--){
  digitalWrite(i, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(150);
  }
  
  for(int i=3 ; i<8; i++){
  digitalWrite(i, LOW);   // turn the LED off by making the voltage LOW                   
  delay(150);
  }
 
}