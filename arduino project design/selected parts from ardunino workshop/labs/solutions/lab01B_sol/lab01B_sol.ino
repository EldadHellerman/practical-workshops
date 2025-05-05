const int pin_led = ;
int delay_amount_ms = 500;

void setup(){
  pinMode(pin_led, OUTPUT); // set LED as output
}

void blink_led(int pin, int delay_ms){
  digitalWrite(pin, HIGH);
  delay(delay_ms);
  digitalWrite(pin, LOW);
  delay(delay_ms);  
}

void loop(){
  blink_led(pin_led, delay_amount_ms);
}

// or for a changing delay we can try this:
/*

#define MIN_DELAY_MS  20
#define MAX_DELAY_MS  1280
#define STEP_SIZE  2

void loop(){
  for(int delay_amount_ms = MIN_DELAY_MS; delay_amount_ms < MAX_DELAY_MS; delay_amount_ms *= STEP_SIZE){
    blink_led(LED_BUILTIN, delay_amount_ms);
  }
  for(int delay_amount_ms = MAX_DELAY_MS; delay_amount_ms > MIN_DELAY_MS; delay_amount_ms /= STEP_SIZE){
    blink_led(LED_BUILTIN, delay_amount_ms);
  }
}
*/