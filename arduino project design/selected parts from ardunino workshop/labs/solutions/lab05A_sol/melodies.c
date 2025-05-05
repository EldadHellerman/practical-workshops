// melodies taken from:
// https://github.com/robsoncouto/arduino-songs/tree/master

#include "melodies.h"

const note_t melody_1_notes[] = {
  NOTE_E5,  NOTE_DS5,
  NOTE_E5,  NOTE_DS5,   NOTE_E5,    NOTE_B4,    NOTE_D5,    NOTE_C5,
  NOTE_A4,  NOTE_C4,    NOTE_E4,    NOTE_A4,
  NOTE_B4,  NOTE_E4,    NOTE_GS4,   NOTE_B4,
  NOTE_C5,  NOTE_REST,  NOTE_E4,    NOTE_E5,    NOTE_DS5,
  
  NOTE_E5,  NOTE_DS5,   NOTE_E5,    NOTE_B4,    NOTE_D5,    NOTE_C5,//6
  NOTE_A4,  NOTE_C4,    NOTE_E4,    NOTE_A4, 
  NOTE_B4,  NOTE_E4,    NOTE_C5,    NOTE_B4, 
  NOTE_A4,  NOTE_REST, //9 - 1st ending

  //repeats from 1 ending on 10
  NOTE_E5,  NOTE_DS5, //1
  NOTE_E5,  NOTE_DS5,   NOTE_E5,    NOTE_B4,    NOTE_D5,    NOTE_C5,
  NOTE_A4,  NOTE_C4,    NOTE_E4,    NOTE_A4,
  NOTE_B4,  NOTE_E4,    NOTE_GS4,   NOTE_B4,
  NOTE_C5,  NOTE_REST,  NOTE_E4,    NOTE_E5,    NOTE_DS5,
  
  NOTE_E5,  NOTE_DS5,   NOTE_E5,    NOTE_B4,    NOTE_D5,    NOTE_C5, //6
  NOTE_A4,  NOTE_C4,    NOTE_E4,    NOTE_A4,
  NOTE_B4,  NOTE_E4,    NOTE_C5,    NOTE_B4,
  NOTE_A4,  NOTE_REST,  NOTE_B4,    NOTE_C5,    NOTE_D5,//10 - 2nd ending
  //continues from 11
  NOTE_E5,  NOTE_G4,    NOTE_F5,    NOTE_E5, 
  NOTE_D5,  NOTE_F4,    NOTE_E5,    NOTE_D5, //12
  
  NOTE_C5,    NOTE_E4,    NOTE_D5,    NOTE_C5, //13
  NOTE_B4,    NOTE_REST,  NOTE_E4,    NOTE_E5,    NOTE_REST,
  NOTE_REST,  NOTE_E5,    NOTE_E6,    NOTE_REST,  NOTE_REST,  NOTE_DS5,
  NOTE_E5,    NOTE_REST,  NOTE_REST,  NOTE_DS5,   NOTE_E5,    NOTE_DS5,
  NOTE_E5,    NOTE_DS5,   NOTE_E5,    NOTE_B4,    NOTE_D5,    NOTE_C5,
  NOTE_A4,    NOTE_REST,  NOTE_C4,    NOTE_E4,    NOTE_A4,
  
  NOTE_B4, NOTE_REST, NOTE_E4, NOTE_GS4, NOTE_B4, //19
  NOTE_C5, NOTE_REST, NOTE_E4, NOTE_E5,  NOTE_DS5,
  NOTE_E5, NOTE_DS5, NOTE_E5, NOTE_B4, NOTE_D5, NOTE_C5,
  NOTE_A4, NOTE_REST, NOTE_C4, NOTE_E4, NOTE_A4,
  NOTE_B4, NOTE_REST, NOTE_E4, NOTE_C5, NOTE_B4,
  NOTE_A4, NOTE_REST, NOTE_B4, NOTE_C5, NOTE_D5, //24 (1st ending)
  
  //repeats from 11
  NOTE_E5, NOTE_G4, NOTE_F5, NOTE_E5, 
  NOTE_D5, NOTE_F4, NOTE_E5, NOTE_D5, //12
  
  NOTE_C5, NOTE_E4, NOTE_D5, NOTE_C5, //13
  NOTE_B4, NOTE_REST, NOTE_E4, NOTE_E5, NOTE_REST,
  NOTE_REST, NOTE_E5, NOTE_E6, NOTE_REST, NOTE_REST, NOTE_DS5,
  NOTE_E5, NOTE_REST, NOTE_REST, NOTE_DS5, NOTE_E5, NOTE_DS5,
  NOTE_E5, NOTE_DS5, NOTE_E5, NOTE_B4, NOTE_D5, NOTE_C5,
  NOTE_A4, NOTE_REST, NOTE_C4, NOTE_E4, NOTE_A4,
  
  NOTE_B4, NOTE_REST, NOTE_E4, NOTE_GS4, NOTE_B4, //19
  NOTE_C5, NOTE_REST, NOTE_E4, NOTE_E5,  NOTE_DS5,
  NOTE_E5, NOTE_DS5, NOTE_E5, NOTE_B4, NOTE_D5, NOTE_C5,
  NOTE_A4, NOTE_REST, NOTE_C4, NOTE_E4, NOTE_A4,
  NOTE_B4, NOTE_REST, NOTE_E4, NOTE_C5, NOTE_B4,
  NOTE_A4, NOTE_REST, NOTE_C5, NOTE_C5, NOTE_C5, //25 - 2nd ending

  //continues from 26
  NOTE_C5,  NOTE_F5, NOTE_E5, //26
  NOTE_E5,  NOTE_D5, NOTE_AS5, NOTE_A5,
  NOTE_A5,  NOTE_G5, NOTE_F5, NOTE_E5, NOTE_D5, NOTE_C5,
  NOTE_AS4, NOTE_A4, NOTE_A4, NOTE_G4, NOTE_A4, NOTE_B4,
  NOTE_C5,  NOTE_D5, NOTE_DS5,
  NOTE_E5,  NOTE_E5, NOTE_F5, NOTE_A4,
  NOTE_C5,  NOTE_D5, NOTE_B4,
  
  
  NOTE_C5, NOTE_G5, NOTE_G4, NOTE_G5, NOTE_A4, NOTE_G5, NOTE_B4, NOTE_G5, NOTE_C5, NOTE_G5, NOTE_D5, NOTE_G5, //33
  NOTE_E5, NOTE_G5, NOTE_C6, NOTE_B5, NOTE_A5, NOTE_G5, NOTE_F5, NOTE_E5, NOTE_D5, NOTE_G5, NOTE_F5, NOTE_D5,
  NOTE_C5, NOTE_G5, NOTE_G4, NOTE_G5, NOTE_A4, NOTE_G5, NOTE_B4, NOTE_G5, NOTE_C5, NOTE_G5, NOTE_D5, NOTE_G5,

  NOTE_E5, NOTE_G5, NOTE_C6, NOTE_B5,   NOTE_A5, NOTE_G5, NOTE_F5, NOTE_E5, NOTE_D5, NOTE_G5, NOTE_F5, NOTE_D5, //36
  NOTE_E5, NOTE_F5, NOTE_E5, NOTE_DS5,  NOTE_E5, NOTE_B4, NOTE_E5, NOTE_DS5, NOTE_E5, NOTE_B4, NOTE_E5, NOTE_DS5,
  NOTE_E5, NOTE_B4, NOTE_E5, NOTE_DS5,
  NOTE_E5, NOTE_B4, NOTE_E5, NOTE_REST,

  NOTE_REST, NOTE_DS5, NOTE_E5, NOTE_REST, NOTE_REST, NOTE_DS5, //40
  NOTE_E5, NOTE_DS5, NOTE_E5, NOTE_B4, NOTE_D5, NOTE_C5,
  NOTE_A4, NOTE_REST, NOTE_C4, NOTE_E4, NOTE_A4,
  NOTE_B4, NOTE_REST, NOTE_E4, NOTE_GS4, NOTE_B4,
  NOTE_C5, NOTE_REST, NOTE_E4, NOTE_E5, NOTE_DS5,
  NOTE_E5, NOTE_DS5, NOTE_E5, NOTE_B4, NOTE_D5, NOTE_C5,

  NOTE_A4,    NOTE_REST, NOTE_C4, NOTE_E4, NOTE_A4, //46
  NOTE_B4,    NOTE_REST, NOTE_E4, NOTE_C5, NOTE_B4,
  NOTE_A4,    NOTE_REST, NOTE_B4, NOTE_C5, NOTE_D5,
  NOTE_E5,    NOTE_G4, NOTE_F5, NOTE_E5,
  NOTE_D5,    NOTE_F4, NOTE_E5, NOTE_D5,
  NOTE_C5,    NOTE_E4, NOTE_D5, NOTE_C5,
  NOTE_B4,    NOTE_REST, NOTE_E4, NOTE_E5, NOTE_REST,
  NOTE_REST,  NOTE_E5, NOTE_E6, NOTE_REST, NOTE_REST, NOTE_DS5,

  NOTE_E5, NOTE_REST, NOTE_REST, NOTE_DS5, NOTE_E5, NOTE_D5, //54
  NOTE_E5, NOTE_DS5, NOTE_E5, NOTE_B4, NOTE_D5, NOTE_C5,
  NOTE_A4, NOTE_REST, NOTE_C4, NOTE_E4, NOTE_A4,
  NOTE_B4, NOTE_REST, NOTE_E4, NOTE_GS4, NOTE_B4,
  NOTE_C5, NOTE_REST, NOTE_E4, NOTE_E5, NOTE_DS5,
  NOTE_E5, NOTE_DS5, NOTE_E5, NOTE_B4, NOTE_D5, NOTE_C5,
  
  NOTE_A4, NOTE_REST, NOTE_C4, NOTE_E4, NOTE_A4, //60
  NOTE_B4, NOTE_REST, NOTE_E4, NOTE_C5, NOTE_B4,
  NOTE_A4, NOTE_REST, NOTE_REST, NOTE_REST, 
  NOTE_CS5,
  NOTE_D5, NOTE_E5, NOTE_F5,
  NOTE_F5, NOTE_F5, 
  NOTE_E5,
  NOTE_D5, NOTE_C5, NOTE_B4,
  NOTE_A4, NOTE_A4,
  NOTE_A4, NOTE_C5, NOTE_B4,
  NOTE_A4,
  NOTE_CS5,

  NOTE_D5, NOTE_E5, NOTE_F5, //72
  NOTE_F5, NOTE_F5,
  NOTE_F5,
  NOTE_DS5, NOTE_D5, NOTE_C5,
  NOTE_AS4, NOTE_A4,
  NOTE_GS4, NOTE_G4,
  NOTE_A4,
  NOTE_B4, NOTE_REST,
  NOTE_A3, NOTE_C4, NOTE_E4, NOTE_A4, NOTE_C5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_B4,

  NOTE_A4, NOTE_C5, NOTE_E5, NOTE_A5, NOTE_C6, NOTE_E6, NOTE_D6, NOTE_C6, NOTE_B5, //80
  NOTE_A4, NOTE_C5, NOTE_E5, NOTE_A5, NOTE_C6, NOTE_E6, NOTE_D6, NOTE_C6, NOTE_B5,
  NOTE_AS5, NOTE_A5, NOTE_GS5, NOTE_G5, NOTE_FS5, NOTE_F5, NOTE_E5, NOTE_DS5, NOTE_D5,

  NOTE_CS5, NOTE_C5, NOTE_B4, NOTE_AS4, NOTE_A4, NOTE_GS4, NOTE_G4, NOTE_FS4, NOTE_F4, //84
  NOTE_E4, NOTE_DS5, NOTE_E5, NOTE_B4, NOTE_D5, NOTE_C5,
  NOTE_A4, NOTE_C4, NOTE_E4, NOTE_A4,
  NOTE_B4, NOTE_E4, NOTE_GS4, NOTE_B4,

  NOTE_C5, NOTE_REST, NOTE_E4, NOTE_E5, NOTE_DS5, //88
  NOTE_E5, NOTE_DS5, NOTE_E5, NOTE_B4, NOTE_D5, NOTE_C5,
  NOTE_A4, NOTE_C4, NOTE_E4, NOTE_A4, 
  NOTE_B4, NOTE_E4, NOTE_C5, NOTE_B4, 
  NOTE_A4, NOTE_REST,
  NOTE_REST, NOTE_G4, NOTE_F5, NOTE_E5,
  NOTE_D5 , NOTE_REST,
  NOTE_REST, NOTE_E4, NOTE_D5, NOTE_C5,
  
  NOTE_B4, NOTE_E4, NOTE_E5, //96
  NOTE_E5, NOTE_E6, NOTE_DS5,
  NOTE_E5, NOTE_REST, NOTE_REST, NOTE_DS5, NOTE_E5, NOTE_DS5,
  NOTE_E5, NOTE_DS5, NOTE_E5, NOTE_B4, NOTE_D5, NOTE_C5,
  NOTE_A4, NOTE_C4, NOTE_E4, NOTE_A4,
  NOTE_B4, NOTE_E4, NOTE_GS4, NOTE_B4,

  NOTE_C5, NOTE_REST, NOTE_E4, NOTE_E5, NOTE_DS5, //102
  NOTE_E5, NOTE_DS5, NOTE_E5, NOTE_B4, NOTE_D5, NOTE_C5,
  NOTE_A4, NOTE_C4, NOTE_E4, NOTE_A4,
  NOTE_B4, NOTE_E4, NOTE_C5, NOTE_B4,
  NOTE_A4,

};
const note_duration_t melody_1_durations[sizeof(melody_1_notes)/sizeof(note_t)] = {
  8, 8, //1
  8, 8, 8, 8, 8, 8,
  24, 8, 8, 8,
  24, 8, 8, 8,
  16, 8, 8, 8, 8,
  
  8, 8,  8,  8, 8, 8,//6
  24, 8,  8,  8, 
  24, 8,  8,  8, 
  32, 16, //9 - 1st ending

  //repaets from 1 ending on 10
  8, 8, //1
  8, 8, 8, 8, 8, 8,
  24, 8, 8, 8,
  24, 8, 8, 8,
  16,  8, 8, 8, 8,
  
  8, 8, 8, 8, 8, 8,//6
  24, 8, 8, 8, 
  24, 8, 8, 8, 
  16, 8, 8, 8, 8, //10 - 2nd ending
  //continues from 11
  24, 8, 8, 8, 
  24, 8, 8, 8, //12
  
  24, 8, 8, 8, //13
  16, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8,
  16, 8, 8, 8, 8,
  
  16, 8, 8, 8, 8, //19
  16, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8,
  16, 8, 8, 8, 8,
  16, 8, 8, 8, 8,
  16, 8, 8, 8, 8, //24 (1st ending)
  
  //repeats from 11
  24, 8, 8, 8, 
  24, 8, 8, 8, //12

  24, 8, 8, 8, //13
  16, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8,
  16, 8, 8, 8, 8,
  
  16, 8, 8, 8, 8, //19
  16, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8,
  16, 8, 8, 8, 8,
  16, 8, 8, 8, 8,
  16, 8, 8, 8, 8, //25 - 2nd ending

  //continues from 26
  32, 24,  4, //26
  16, 16,  24, 4,
  8, 8,  8, 8, 8, 8,
  16, 16,  4, 4, 4, 4,
  32, 8,  8,
  24, 8,  8, 8,
  32,  24,  4,
  
  
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, //33
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,

  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, //36
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  24, 8, 8, 8,
  24, 8, 8, 8,

  8, 8, 8, 8, 8, 8, //40
  8, 8, 8, 8, 8, 8,
  16, 8, 8, 8, 8,
  16, 8, 8, 8, 8,
  16, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8,

   16, 8, 8, 8, 8, //46
   16, 8, 8, 8, 8,
   16, 8, 8, 8, 8,
   24, 8, 8, 8,
   24, 8, 8, 8,
   24, 8, 8, 8,
   16, 8, 8, 8, 8,
   8, 8, 8, 8, 8, 8,

  8, 8, 8, 8, 8, 8, //54
  8, 8, 8, 8, 8, 8,
  16, 8, 8, 8, 8,
  16, 8, 8, 8, 8,
  16, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8,
  
  16,  8, 8, 8, 8, //60
  16,  8, 8, 8, 8,
  16,  8, 8, 16, 
   48, 
   32, 8,  8,
   32,  16, 
   48,
   32, 8, 8,
   32, 16,
  16, 16, 16,
   48,
   48,

   32, 8, 8, //72
   32, 16,
  48,
  32, 8, 8,
  32, 16,
  32, 16,
   48,
   32, 16,
  6, 6, 6, 6, 6, 6, 6, 6, 6,

  6, 6, 6, 6, 6, 6, 6, 6, 6, //80
  6, 6, 6, 6, 6, 6, 6, 6, 6,
  6, 6, 6, 6, 6, 6, 6, 6, 6,

   6, 6, 6, 6, 6, 6, 6, 6, 6, //84
   8, 8, 8, 8, 8, 8,
   24, 8, 8, 8,
   24, 8, 8, 8,

  16, 8, 8, 8, 8, //88
  8, 8, 8, 8, 8, 8, 
  24, 8, 8, 8, 
  24, 8, 8, 8, 
  24, 24,
  24, 8, 8, 8,
  32, 16,
  24, 8, 8, 8,
  
  24, 8, 16, //96
  16, 24, 8,
  8, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8,
  24, 8, 8, 8,
  24, 8, 8, 8,

  16, 8,  8, 8, 8, //102
  8, 8,  8, 8, 8, 8,
  24, 8,  8, 8,
  24, 8,  8, 8,
  48
};
const int melody_1_tempo = 80;
const int melody_1_length = sizeof(melody_1_notes)/sizeof(note_t);

const note_t melody_2_notes [] = {
  NOTE_REST, NOTE_D4,
  NOTE_G4, NOTE_AS4, NOTE_A4,
  NOTE_G4, NOTE_D5, 
  NOTE_C5, 
  NOTE_A4,
  NOTE_G4, NOTE_AS4, NOTE_A4,
  NOTE_F4, NOTE_GS4,
  NOTE_D4, 
  NOTE_D4,

  NOTE_G4, NOTE_AS4, NOTE_A4, //10
  NOTE_G4, NOTE_D5,
  NOTE_F5, NOTE_E5,
  NOTE_DS5, NOTE_B4,
  NOTE_DS5, NOTE_D5, NOTE_CS5,
  NOTE_CS4, NOTE_B4,
  NOTE_G4,
  NOTE_AS4,
     
  NOTE_D5, NOTE_AS4,//18
  NOTE_D5, NOTE_AS4,
  NOTE_DS5, NOTE_D5,
  NOTE_CS5, NOTE_A4,
  NOTE_AS4, NOTE_D5, NOTE_CS5,
  NOTE_CS4, NOTE_D4,
  NOTE_D5,
  NOTE_REST, NOTE_AS4,

  NOTE_D5, NOTE_AS4,//26
  NOTE_D5, NOTE_AS4,
  NOTE_F5, NOTE_E5,
  NOTE_DS5, NOTE_B4,
  NOTE_DS5, NOTE_D5, NOTE_CS5,
  NOTE_CS4, NOTE_AS4,
  NOTE_G4,
  
};
const note_duration_t melody_2_durations[sizeof(melody_2_notes)/sizeof(note_t)] = {
  64,  32,
  48,  8, 32,
  64,  32,
  96, 
  96,
  48,  8, 32,
  64,  32,
  192, 
  32,

  48, 8, 32, //10
  64, 32,
  64, 32,
  64, 32,
  48, 8, 32,
  64, 32,
  192,
  32,

   64, 32,//18
   64, 32,
   64, 32,
   64, 32,
   48, 8, 32,
   64, 32,
   192, 
  32,32,  

  64, 32,//26
  64, 32,
  64, 32,
  64, 32,
  48, 8, 32,
  64, 32,
  192, 
  
};
const int melody_2_length = sizeof(melody_2_notes)/sizeof(note_t);
const int melody_2_tempo = 144;

const note_t melody_3_notes[] = {
  NOTE_E5,  NOTE_B4,  NOTE_C5,  NOTE_D5,  NOTE_C5,  NOTE_B4,
  NOTE_A4,  NOTE_A4,  NOTE_C5,  NOTE_E5,  NOTE_D5,  NOTE_C5,
  NOTE_B4,  NOTE_C5,  NOTE_D5,  NOTE_E5,
  NOTE_C5,  NOTE_A4,  NOTE_A4,  NOTE_A4,  NOTE_B4,  NOTE_C5,

  NOTE_D5,  NOTE_F5,  NOTE_A5,  NOTE_G5,  NOTE_F5,
  NOTE_E5,  NOTE_C5,  NOTE_E5,  NOTE_D5,  NOTE_C5,
  NOTE_B4,  NOTE_B4,  NOTE_C5,  NOTE_D5,  NOTE_E5,
  NOTE_C5,  NOTE_A4,  NOTE_A4, NOTE_REST,

  NOTE_E5,  NOTE_B4,  NOTE_C5,  NOTE_D5,  NOTE_C5,  NOTE_B4,
  NOTE_A4,  NOTE_A4,  NOTE_C5,  NOTE_E5,  NOTE_D5,  NOTE_C5,
  NOTE_B4,  NOTE_C5,  NOTE_D5,  NOTE_E5,
  NOTE_C5,  NOTE_A4,  NOTE_A4,  NOTE_A4,  NOTE_B4,  NOTE_C5,

  NOTE_D5,  NOTE_F5,  NOTE_A5,  NOTE_G5,  NOTE_F5,
  NOTE_E5,  NOTE_C5,  NOTE_E5,  NOTE_D5,  NOTE_C5,
  NOTE_B4,  NOTE_B4,  NOTE_C5,  NOTE_D5,  NOTE_E5,
  NOTE_C5,  NOTE_A4,  NOTE_A4, NOTE_REST,
  

  NOTE_E5,  NOTE_C5,
  NOTE_D5,   NOTE_B4,
  NOTE_C5,   NOTE_A4,
  NOTE_GS4,  NOTE_B4,  NOTE_REST,
  NOTE_E5,   NOTE_C5,
  NOTE_D5,   NOTE_B4,
  NOTE_C5,   NOTE_E5,  NOTE_A5,
  NOTE_GS5,
};
const note_duration_t melody_3_durations[sizeof(melody_3_notes)/sizeof(note_t)] = {
  32, 16, 16, 32, 16, 16,
  32, 16, 16, 32, 16, 16,
  48, 16, 32, 32,
  32, 32, 16, 32, 16, 16,

  48, 16, 32, 16, 16,
  48, 16, 32, 16, 16,
  32, 16, 16, 32, 32,
  32, 32, 32, 32,

  32, 16, 16, 32, 16, 16,
  32, 16, 16, 32, 16, 16,
  48, 16, 32, 32,
  32, 32, 16, 32, 16, 16,

  48, 16, 32, 16, 16,
  48, 16, 32, 16, 16,
  32, 16, 16, 32, 32,
  32, 32, 32, 32,
  

  64, 64,
  64, 64,
  64, 64,
  64, 32 ,16, 
  64, 64,
  64, 64,
  32, 32, 64,
  64,
};
const int melody_3_tempo = 144;
const int melody_3_length = sizeof(melody_3_notes)/sizeof(note_t);

const note_t melody_4_notes[] = {
  NOTE_FS4, NOTE_E4,
  NOTE_D4,  NOTE_CS4,
  NOTE_B3,  NOTE_A3,
  NOTE_B3,  NOTE_CS4,
  NOTE_FS4, NOTE_E4,
  NOTE_D4,  NOTE_CS4,
  NOTE_B3,  NOTE_A3,
  NOTE_B3,  NOTE_CS4,
  NOTE_D4,  NOTE_CS4,
  NOTE_B3,  NOTE_A3,
  NOTE_G3,  NOTE_FS3,
  NOTE_G3,  NOTE_A3,

  NOTE_D4,  NOTE_FS4,   NOTE_G4,    NOTE_A4,    NOTE_FS4,    NOTE_G4,
  NOTE_A4,  NOTE_B3,    NOTE_CS4,   NOTE_D4,    NOTE_E4,     NOTE_FS4,  NOTE_G4,
  NOTE_FS4, NOTE_D4,    NOTE_E4,    NOTE_FS4,   NOTE_FS3,    NOTE_G3,
  NOTE_A3,  NOTE_G3,    NOTE_FS3,   NOTE_G3,    NOTE_A3,    
  NOTE_G3,  NOTE_B3,    NOTE_A3,    NOTE_G3,    NOTE_FS3,    NOTE_E3, 
  NOTE_FS3, NOTE_D3,    NOTE_E3,    NOTE_FS3,   NOTE_G3,     NOTE_A3,   NOTE_B3,

  NOTE_G3,  NOTE_B3,    NOTE_A3,    NOTE_B3,    NOTE_CS4,   NOTE_D4,
  NOTE_A3,  NOTE_B3,    NOTE_CS4,   NOTE_D4,    NOTE_E4,    NOTE_FS4,   NOTE_G4,    NOTE_A4,
  NOTE_A4,  NOTE_FS4,   NOTE_G4,    NOTE_A4,
  NOTE_FS4, NOTE_G4,    NOTE_A4,    NOTE_A3,    NOTE_B3,    NOTE_CS4,
  NOTE_D4,  NOTE_E4,    NOTE_FS4,   NOTE_G4,    NOTE_FS4,   NOTE_D4,    NOTE_E4,
  NOTE_FS4, NOTE_CS4,   NOTE_A3,    NOTE_A3,

  NOTE_CS4, NOTE_B3,    NOTE_D4,    NOTE_CS4,   NOTE_B3,    
  NOTE_A3,  NOTE_G3,    NOTE_A3,    NOTE_D3,    NOTE_E3,    NOTE_FS3,   NOTE_G3,
  NOTE_A3,  NOTE_B3,    NOTE_G3,    NOTE_B3,    NOTE_A3,    NOTE_B3,
  NOTE_CS4, NOTE_D4,    NOTE_A3,    NOTE_B3,    NOTE_CS4,   NOTE_D4,    NOTE_E4,
  NOTE_FS4, NOTE_G4,    NOTE_A4
};
const note_duration_t melody_4_durations[sizeof(melody_4_notes)/sizeof(note_t)] = {
  DUR_2, DUR_2,
  DUR_2, DUR_2,
  DUR_2, DUR_2,
  DUR_2, DUR_2,
  DUR_2, DUR_2,
  DUR_2, DUR_2,
  DUR_2, DUR_2,
  DUR_2, DUR_2,
  DUR_2, DUR_2,
  DUR_2, DUR_2,
  DUR_2, DUR_2,
  DUR_2, DUR_2,

  DUR_4, DUR_8, DUR_8, DUR_4, DUR_8, DUR_8,
  DUR_4, DUR_8, DUR_8, DUR_8, DUR_8, DUR_8, DUR_8,
  DUR_4, DUR_8, DUR_8, DUR_4, DUR_8, DUR_8,
  DUR_8, DUR_8, DUR_8, DUR_8, DUR_2,
  DUR_4, DUR_8, DUR_8, DUR_4, DUR_8, DUR_8,
  DUR_4, DUR_8, DUR_8, DUR_8, DUR_8, DUR_8, DUR_8,

  DUR_4, DUR_8, DUR_8, DUR_4, DUR_8, DUR_8,
  DUR_8, DUR_8, DUR_8, DUR_8, DUR_8, DUR_8, DUR_8, DUR_2,
  DUR_4, DUR_8, DUR_8, DUR_4,
  DUR_8, DUR_8, DUR_8, DUR_8, DUR_8, DUR_8,
  DUR_8, DUR_8, DUR_8, DUR_8, DUR_4, DUR_8, DUR_8,
  DUR_8, DUR_8, DUR_8, DUR_8,

  DUR_4, DUR_4, DUR_8, DUR_8, DUR_4,
  DUR_8, DUR_8, DUR_4, DUR_8, DUR_8, DUR_8, DUR_8,
  DUR_8, DUR_4, DUR_4, DUR_8, DUR_8, DUR_4,
  DUR_8, DUR_8, DUR_8, DUR_8, DUR_8, DUR_8, DUR_8,
  DUR_8, DUR_8, DUR_2
};
const int melody_4_tempo = 100;
const int melody_4_length = sizeof(melody_4_notes)/sizeof(note_t);
