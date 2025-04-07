#define NUMBER_OF_BUTTONS       4
#define BEEP_DURATION_MS        250
#define NUMBER_OF_MOVES         10

// red, blue, yellow, green
const int pin_buttons[NUMBER_OF_BUTTONS] = {11, 7, 4, 12};
const int pin_leds[NUMBER_OF_BUTTONS] = {10, 6, 3, 5};
const int pin_buzzer = 12;

const int freqs[NUMBER_OF_BUTTONS] = {494, 523, 587, 440}; // original is {330, 196, 262, 392}
const int freq_game_over = 392; // original is 42Hz

byte moves[NUMBER_OF_MOVES];
int move_counter; // counter for current number of moves in the sequence.

inline bool button_pressed(int button_number){
    // TODO #1 - reading buttons
    // read button number `button_number` using `digitalRead`.
    // return true if the button is pressed and false if not.
    return false;
}

void beep(int freq){
    // TODO #2 beeping
    // output a tone to the buzzer at the frequency `freq` using `tone`.
    // delay for `BEEP_DURATION_MS`
    // then stop the tone using `noTone`
}

void test(){
  for(int i = 0; i < NUMBER_OF_BUTTONS; i++){
    digitalWrite(pin_leds[i], HIGH);
    while(!button_pressed(i));
    beep(freqs[i]);
    digitalWrite(pin_leds[i], LOW);
  }
}

void init_game(){
  move_counter = 1;
  for(int i = 0; i < NUMBER_OF_MOVES; i++){
    moves[i] = random(1000) % NUMBER_OF_BUTTONS;
  }
}

// TODO #5 - reading helper functions
// read and understand these functions:
// - `wait_button_press`
// - `wait_button_release`.
// it is recommended to use these functions in the rest of the exercise.

int wait_button_press(){
    // wait until a button is pressed and return it's number
    while(true) for(int i = 0; i < NUMBER_OF_BUTTONS; i++) if(button_pressed(i)) return i;
}

void wait_button_release(){
  // wait until all buttons are release for at least 50ms (sampled at 10ms intervals)
  for(int k = 0; k < 5; k++){
    while(true){
      bool pressed = false;
      for(int i = 0; i < NUMBER_OF_BUTTONS; i++){
        if(button_pressed(i)) pressed = true;
      }
      if(!pressed) break;
    }
    delay(10);
  }
}

void show_moves(){
    // TODO #6 - showing moves
    // display the user the sequence he should enter. here is a loop to go over each move:
  for(int m = 0; m < move_counter; m++){
    int i = moves[m]; // i is the next move number
    // turn LED on for that move using `digitalWrite`
    // make a sound using `beep`
    // turn LED off using `digitalWrite`
    // add some delay, using `delay`
  }
}

bool read_moves(){
    // TODO #7 - reading moves
    // read if the user is entering the correct sequence of moves.
    // return true if he does, false if not
    // use same loop structure as in `show_moves`:
    for(int m = 0; m < move_counter; m++){
        int i = moves[m]; // i is the next move number
        // wait for the next button press using `wait_button_press`. if it's not i, return false.
        // otherwise, turn on the led and make a beep for that move. similar to `show_moves`.
        // wait for all the buttons to be released using `wait_button_release`. what would occur if not?
    }
    // if reached here, the user has entered the correct sequence and we can return true:
    return true;
}

void game_over(){
    // TODO #8 - showing game over
    // play some sort of game over sequence.
    // my implementation does this:
    // repeat 3 times:
    //   turns on all leds
    //   beeps with frequency `freq_game_over`
    //   turns off all leds
    //   some delay
}

void game_won(){
    // TODO #9 - showing game won
    // play some sort of game won sequence.
    // my implementation does this:
    //   turns on all leds
    //   beep sequentially with all the frequencies using a loop, two times.
    //   turn off all leds
}

void setup(){
    // TODO #3 - setting pin modes
    // set the pins as inputs and outputs as required.
    // - set pin_buzzer as `OUTPUT`, using `pinMode'
    // - for each of the buttons:
    //   - set pin_buttons[i] as `INPUT`, using `pinMode'
    //   - set pin_leds[i] as `OUTPUT`, using `pinMode'
    //   reminder: this is the syntax for a loop:
    for(int i = 0; i < NUMBER_OF_BUTTONS; i++){
        
    }

    // this ensures a random game each time. best without it for initial debugging, but remove this for final version.
    // randomSeed(analogRead(A0));

    // TODO #4 - running simple test
    // run this test function, and check that the board works.
    // read the code to see how it should behave.
    // if somthing isn't working - this can be due to a software bug - which can be easily fixed,
    // or a hardware bug - which may require resoldering, and replacing parts.
    test();
    init_game();
}

void loop(){
    // TODO #10 - main game logic
    // once we have all the previous functions, the main game logic is not very complicated.
    // here is my recommendation:
    // - show the user the moves, using `show_moves`
    // - read the moves from the user and store the result (success / failure)
    // - if the user failed, call `game_over`. you can then wait a bit and start a new game using `init_game`
    // - if the user reached `NUMBER_OF_MOVES` - call `game_won`. you can start a new game after that.
    // - otherwise, we need to increment `move_counter`, and move to the next round.
}