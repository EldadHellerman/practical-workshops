inline float note_number_to_frequency(int note_number){
  return NOTE_A4_FREQ * pow(2, ((note_number - NOTE_A4) / 12.0));
}

int duration_to_ms(int duration, int tempo){
  unsigned long int wholenote = (60000L * 4) / tempo;
  return (wholenote * duration) / DUR_1;
}

void play_note(int frequency, int duration_ms){
  // TODO
}

void play_melody(int tempo, int number_of_notes, const note_t *notes, const note_duration_t *durations){
  for(int i = 0; i < number_of_notes; i++){
    int duration_ms = /* TODO */ ;
    int frequency = /* TODO */ ;
    int note_number = notes[i];
    if(note_number != NOTE_REST){
      // TODO
    }else{
      // TODO
    }
  }
}