#define PIN_LED1        
#define PIN_LED2        
#define PIN_LED3        
#define DELAY_LED1_MS   251
#define DELAY_LED2_MS   593
#define DELAY_LED3_MS   1249

void our_delay(unsigned long int delay_ms){
    // an implementation of a delay function
    unsigned long int timestamp = millis();
    while(millis() - timestamp < delay_ms);
}

void blink_led(int pin, int delay_ms){
  digitalWrite(pin, HIGH);
  our_delay(delay_ms);
  digitalWrite(pin, LOW);
  our_delay(delay_ms);  
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
unsigned long int previous_change_led_2 = 0;
unsigned long int previous_change_led_3 = 0;

void loop(){
  unsigned long int current_time = millis();

  if(current_time - previous_change_led_1 > DELAY_LED1_MS){
    digitalWrite(PIN_LED1, !digitalRead(PIN_LED1)); // toggle LED1
    previous_change_led_1 = current_time;
  }

  if(current_time - previous_change_led_2 > DELAY_LED2_MS){
    digitalWrite(PIN_LED2, !digitalRead(PIN_LED2)); // toggle LED2
    previous_change_led_2 = current_time;
  }

  if(current_time - previous_change_led_3 > DELAY_LED3_MS){
    digitalWrite(PIN_LED3, !digitalRead(PIN_LED3)); // toggle LED3
    previous_change_led_3 = current_time;
  }
}
