

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
 pinMode(3,INPUT);
 pinMode(5,OUTPUT);
 Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  int a=digitalRead(3);
  Serial.println(digitalRead(3));
 if(a==1){
    digitalWrite(5,HIGH);
 }
 else{
   digitalWrite(5,LOW);
 }
}