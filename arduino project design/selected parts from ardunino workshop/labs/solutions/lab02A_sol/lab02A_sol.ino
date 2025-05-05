#define PIN_LED_1       10
#define PIN_LED_2       6
#define PIN_LED_3       3
#define PIN_SW_1        11
#define PIN_SW_2        7
#define PIN_SW_3        4

void setup(){
  pinMode(PIN_LED_1, OUTPUT);
  pinMode(PIN_LED_2, OUTPUT);
  pinMode(PIN_LED_3, OUTPUT);
  
  pinMode(PIN_SW_1, INPUT_PULLUP);
  pinMode(PIN_SW_2, INPUT_PULLUP);
  pinMode(PIN_SW_3, INPUT_PULLUP);
}

void loop(){
  bool x1 = digitalRead(PIN_SW_1);
  bool x2 = digitalRead(PIN_SW_2);
  bool x3 = digitalRead(PIN_SW_3);
  
  digitalWrite(PIN_LED_1, !x1);
  digitalWrite(PIN_LED_2, !x2);
  digitalWrite(PIN_LED_3, !x3);
}
