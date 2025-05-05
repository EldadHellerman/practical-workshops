void setup(){ // runs once after each reset
  // pin 13 is the built in LED.
  pinMode(13, OUTPUT); // set pin 13 as output (controlling LED)
}

void loop(){ // runs in a loop forever
  digitalWrite(13, HIGH); // turn LED on
  delay(500); // wait 500ms
  digitalWrite(13, LOW); // turn LED off
  delay(500); // wait 500ms
}