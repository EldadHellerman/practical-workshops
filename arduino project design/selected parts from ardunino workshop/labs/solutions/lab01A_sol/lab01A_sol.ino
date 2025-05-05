const int pin_led = ;
int delay_amount_ms = 500;

void setup(){
  pinMode(pin_led, OUTPUT); // set LED as output
}

void loop(){
  digitalWrite(pin_led, HIGH); // turn LED on
  delay(delay_amount_ms);
  digitalWrite(pin_led, LOW); // turn LED off
  delay(delay_amount_ms);
}

/*
// or for a changing delay we can try this:

#define MIN_DELAY_MS  20
#define MAX_DELAY_MS  1280
#define STEP_SIZE  2

void loop(){
  for(int delay_amount_ms = MIN_DELAY_MS; delay_amount_ms < MAX_DELAY_MS; delay_amount_ms *= STEP_SIZE){
    digitalWrite(pin_led, HIGH); // turn LED on
    delay(delay_amount_ms);
    digitalWrite(pin_led, LOW); // turn LED off
    delay(delay_amount_ms);
  }
  for(int delay_amount_ms = MAX_DELAY_MS; delay_amount_ms > MIN_DELAY_MS; delay_amount_ms /= STEP_SIZE){
    digitalWrite(pin_led, HIGH); // turn LED on
    delay(delay_amount_ms);
    digitalWrite(pin_led, LOW); // turn LED off
    delay(delay_amount_ms);
  }
}
*/