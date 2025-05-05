#define NUMBER_OF_BUTTONS       4
#define BUTTONS_ACTIVE_LOW      true
#define BEEP_DURATION_MS        250
#define NUMBER_OF_MOVES         10

const int pin_buttons[NUMBER_OF_BUTTONS] = {11, 7, 4, 12};
const int pin_leds[NUMBER_OF_BUTTONS] = {10, 6, 3, 5};
const int pin_buzzer = 9;

const int freqs[NUMBER_OF_BUTTONS] = {440, 494, 523, 587};
const int freq_game_over = 392;

byte moves[NUMBER_OF_MOVES];
int move_counter;

inline bool button_pressed(int button_number){
  return BUTTONS_ACTIVE_LOW ^ digitalRead(pin_buttons[button_number]);
}

void beep(int freq){
  tone(pin_buzzer, freq);
  delay(BEEP_DURATION_MS);
  noTone(pin_buzzer);
}

void game_init(){
  move_counter = 1;
  for(int i = 0; i < NUMBER_OF_MOVES; i++){
    moves[i] = random(1000) % NUMBER_OF_BUTTONS;
  }
}

int wait_button_press(){
  while(true){
    for(int i = 0; i < NUMBER_OF_BUTTONS; i++){
      if(button_pressed(i)) return i;
    }
  }
}

void wait_button_release(int i = 0){
  for(int k = 0; k < 3; k++){
    while(true){
      bool pressed = false;
      if(i == 0){
        for(int i = 0; i < NUMBER_OF_BUTTONS; i++){
          if(button_pressed(i)) pressed = true;
        }
      }else{
        if(button_pressed(i)) pressed = true;
      }
      if(!pressed) break;
    }
    delay(5);
  }
}

void moves_show(){
  for(int m = 0; m < move_counter; m++){
    int i = moves[m];
    digitalWrite(pin_leds[i], HIGH);
    beep(freqs[i]);
    digitalWrite(pin_leds[i], LOW);
    delay(BEEP_DURATION_MS);
  }
}

bool moves_read(){
  for(int m = 0; m < move_counter; m++){
    int i = moves[m];
    if(wait_button_press() != i) return false;
    digitalWrite(pin_leds[i], HIGH);
    beep(freqs[i]);
    digitalWrite(pin_leds[i], LOW);
    wait_button_release(i);
  }
  return true;
}

void game_over(){
  for(int i = 0; i < 3; i++){
    for(int i = 0; i < NUMBER_OF_BUTTONS; i++) digitalWrite(pin_leds[i], HIGH);
    beep(freq_game_over);
    for(int i = 0; i < NUMBER_OF_BUTTONS; i++) digitalWrite(pin_leds[i], LOW);
    delay(BEEP_DURATION_MS);
  }
  delay(3000);
  game_init();
}

void game_won(){
  for(int i = 0; i < NUMBER_OF_BUTTONS; i++) digitalWrite(pin_leds[i], HIGH);
  for(int i = 0; i < NUMBER_OF_BUTTONS; i++) beep(freqs[i]);
  for(int i = 0; i < NUMBER_OF_BUTTONS; i++) beep(freqs[i]);
  for(int i = 0; i < NUMBER_OF_BUTTONS; i++) digitalWrite(pin_leds[i], LOW);
  delay(3000);
  game_init();
}

void test(){
  for(int i = 0; i < NUMBER_OF_BUTTONS; i++){
    digitalWrite(pin_leds[i], HIGH);
    while(!button_pressed(i));
    beep(freqs[i]);
    digitalWrite(pin_leds[i], LOW);
  }
}

void setup(){
  for(int i = 0; i < NUMBER_OF_BUTTONS; i++){
    pinMode(pin_buttons[i], INPUT_PULLUP);
    pinMode(pin_leds[i], OUTPUT);
  }
  pinMode(pin_buzzer, OUTPUT);

  randomSeed(analogRead(A0));

  // test();
  game_init();
}

void loop(){
  moves_show();
  bool success = moves_read();
  if(!success) game_over();
  else if(move_counter == NUMBER_OF_MOVES) game_won();
  else move_counter++;
  delay(750);
}