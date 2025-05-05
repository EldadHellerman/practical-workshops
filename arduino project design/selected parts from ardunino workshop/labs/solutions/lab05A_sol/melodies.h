#ifndef _MELODIEDS_H
#define _MELODIEDS_H

#include <inttypes.h>

#define NOTE_A4_FREQ  440 // frequency for middle A

#define NOTE_REST     0
#define NOTE_A0       1
#define NOTE_AS0      2
#define NOTE_B0       3
#define NOTE_C1       4
#define NOTE_CS1      5
#define NOTE_D1       6
#define NOTE_DS1      7
#define NOTE_E1       8
#define NOTE_F1       9
#define NOTE_FS1      10
#define NOTE_G1       11
#define NOTE_GS1      12
#define NOTE_A1       13
#define NOTE_AS1      14
#define NOTE_B1       15
#define NOTE_C2       16
#define NOTE_CS2      17
#define NOTE_D2       18
#define NOTE_DS2      19
#define NOTE_E2       20
#define NOTE_F2       21
#define NOTE_FS2      22
#define NOTE_G2       23
#define NOTE_GS2      24
#define NOTE_A2       25
#define NOTE_AS2      26
#define NOTE_B2       27
#define NOTE_C3       28
#define NOTE_CS3      29
#define NOTE_D3       30
#define NOTE_DS3      31
#define NOTE_E3       32
#define NOTE_F3       33
#define NOTE_FS3      34
#define NOTE_G3       35
#define NOTE_GS3      36
#define NOTE_A3       37
#define NOTE_AS3      38
#define NOTE_B3       39
#define NOTE_C4       40
#define NOTE_CS4      41
#define NOTE_D4       42
#define NOTE_DS4      43
#define NOTE_E4       44
#define NOTE_F4       45
#define NOTE_FS4      46
#define NOTE_G4       47
#define NOTE_GS4      48
#define NOTE_A4       49
#define NOTE_AS4      50
#define NOTE_B4       51
#define NOTE_C5       52
#define NOTE_CS5      53
#define NOTE_D5       54
#define NOTE_DS5      55
#define NOTE_E5       56
#define NOTE_F5       57
#define NOTE_FS5      58
#define NOTE_G5       59
#define NOTE_GS5      60
#define NOTE_A5       61
#define NOTE_AS5      62
#define NOTE_B5       63
#define NOTE_C6       64
#define NOTE_CS6      65
#define NOTE_D6       66
#define NOTE_DS6      67
#define NOTE_E6       68
#define NOTE_F6       69
#define NOTE_FS6      70
#define NOTE_G6       71
#define NOTE_GS6      72
#define NOTE_A6       73
#define NOTE_AS6      74
#define NOTE_B6       75
#define NOTE_C7       76
#define NOTE_CS7      77
#define NOTE_D7       78
#define NOTE_DS7      79
#define NOTE_E7       80
#define NOTE_F7       81
#define NOTE_FS7      82
#define NOTE_G7       83
#define NOTE_GS7      84
#define NOTE_A7       85
#define NOTE_AS7      86
#define NOTE_B7       87
#define NOTE_C8       88

// duration in 128'ths, so 128 is a whole note, 128 is half, etc...
#define DUR_1      (128)
#define DUR_2      (DUR_1/2)
#define DUR_4      (DUR_1/4)
#define DUR_8      (DUR_1/8)
#define DUR_16     (DUR_1/16)

typedef uint8_t note_t;
typedef uint8_t note_duration_t;

extern const note_t             melody_1_notes[];
extern const note_duration_t    melody_1_durations[];
extern const int                melody_1_tempo;
extern const int                melody_1_length;

extern const note_t             melody_2_notes[];
extern const note_duration_t    melody_2_durations[];
extern const int                melody_2_tempo;
extern const int                melody_2_length;

extern const note_t             melody_3_notes[];
extern const note_duration_t    melody_3_durations[];
extern const int                melody_3_tempo;
extern const int                melody_3_length;

extern const note_t             melody_4_notes[];
extern const note_duration_t    melody_4_durations[];
extern const int                melody_4_tempo;
extern const int                melody_4_length;

#endif // _MELODIEDS_H