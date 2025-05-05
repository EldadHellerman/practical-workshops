#define PIN_LED1        
#define PIN_LED2        
#define PIN_LED3        
#define DELAY_LED1_MS   251
#define DELAY_LED2_MS   593
#define DELAY_LED3_MS   1249

void blink_led(int pin, int delay_ms){
  digitalWrite(pin, HIGH);
  delay(delay_ms);
  digitalWrite(pin, LOW);
  delay(delay_ms);  
}

void setup(){
  pinMode(PIN_LED1, OUTPUT);
  pinMode(PIN_LED2, OUTPUT);
  pinMode(PIN_LED3, OUTPUT);
  blink_led(PIN_LED1, 500);
  blink_led(PIN_LED2, 500);
  blink_led(PIN_LED3, 500);
}

unsigned long int previous_change_led_1 = 0;

void loop(){
  /*
  unsigned long int current_time = millis();

  if(current_time - previous_change_led_1 > DELAY_LED1_MS){
    digitalWrite(PIN_LED1, !digitalRead(PIN_LED1)); // toggle LED1
    previous_change_led_1 = current_time;
  }
  */
}
