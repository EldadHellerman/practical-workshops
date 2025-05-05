#define PIN_BUZZER  

#include "melodies.h"

int delay_amount_us = (1000000/2000)/2; // 2kHz

void setup(){
  pinMode(PIN_BUZZER, OUTPUT);
  play_melody(melody_1_tempo,
              melody_1_length,
              melody_1_notes,
              melody_1_durations);
  delay(2000);
  play_melody(melody_2_tempo,
              melody_2_length,
              melody_2_notes,
              melody_2_durations);
  delay(2000);
  play_melody(melody_3_tempo,
              melody_3_length,
              melody_3_notes,
              melody_3_durations);
  delay(2000);
  play_melody(melody_4_tempo,
              melody_4_length,
              melody_4_notes,
              melody_4_durations);
  delay(2000);
}

void loop(){
  digitalWrite(PIN_BUZZER, HIGH);
  delayMicroseconds(delay_amount_us);
  digitalWrite(PIN_BUZZER, LOW);
  delayMicroseconds(delay_amount_us);
}


// or for a changing delay we can try this:
/*
#define MIN_DELAY_US  2
#define MAX_DELAY_US  2000
#define STEP_SIZE  2

void loop(){
  for(int delay_amount_us = MIN_DELAY_US; delay_amount_us < MAX_DELAY_US; delay_amount_us += STEP_SIZE){
    digitalWrite(PIN_BUZZER, HIGH); // turn LED on
    delayMicroseconds(delay_amount_us);
    digitalWrite(PIN_BUZZER, LOW); // turn LED off
    delayMicroseconds(delay_amount_us);
  }
  for(int delay_amount_us = MAX_DELAY_US; delay_amount_us > MIN_DELAY_US; delay_amount_us -= STEP_SIZE){
    digitalWrite(PIN_BUZZER, HIGH); // turn LED on
    delayMicroseconds(delay_amount_us);
    digitalWrite(PIN_BUZZER, LOW); // turn LED off
    delayMicroseconds(delay_amount_us);
  }
}
*/
