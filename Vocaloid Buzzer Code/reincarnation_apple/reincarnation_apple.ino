/*
  Melody

  Plays a melody

  circuit:

  - 8 ohm speaker on digital pin 8

  created 21 Jan 2010

  modified 30 Aug 2011

  by Tom Igoe
  
  This example code is in the public domain.
  https://www.arduino.cc/en/Tutorial/Tone


*/

/*

  reincarnation apple short buzzer cover

  転生林檎 (Reincarnation Apple) / PinocchioP: https://www.youtube.com/watch?v=LYWP8HtgeLQ

  piano cover borrowed / BelowAverage.: https://www.youtube.com/watch?v=Zk4BNVrjJ6Y

  by Lenpai

*/

//make sure you make a pitch.h header file first
#include "pitch.h"


//OUTPUT
#define BUZZERPIN 8  //you can change this to any GPIO pin
#define BUTTONPIN 9

int tempo = 145; //tempo of the song

// this calculates the duration of a whole note in ms (60s/tempo)*4 beats
int wholenote = (60000 * 4) / tempo;

int mainMelody[] = {
  CS4, D4, D4, D4, D4, D5, REST,
  //chorus
  C5, D5, REST, C4, D5, D5, D5, C4, D4, D5, D5, D5, C5, G4, G4, A4, REST,
  C4, D5, D5, D5, D5, C4, D5, D5, D5, D5, D5, D5, E5, D5, D5, REST,
  D4, D5, D5, D5, C4, G4, G4, D5, D5, D5, D5, C5, G4, G4, A4, REST,
  E5, E5, D5, REST,
  E5, E5, D5, E5, D5, C5,
  A3, D4, C4, D5, D5, D5, C4, D4, D5, D5, D5, C5, G4, G4, A4, REST,
  C4, D5, D5, D5, C4, D4, F5, F5, E5, C5, C5, C5, E5, D5, D5, REST,
  D4, D5, D5, D5, C4, G4, G4, D5, D5, D5, D5, C5, G4, G4, A4,
  A5, AS5, AS5, A5, REST, E5, E5, D5, D5
};


//Negative number will represent the dotted note. ex -8 will play a dotted eighth note
/* 1 = WHOLE NOTE    
   2 = HALF NOTE
   4 = QUARTER NOTE
   8 = EIGHTH NOTE  
  16 = SIXTEENTH NOTE */
int mainNotes[] = {
  8, 4, 8, 8, 8, 8, 8,

  8, 8, 8, 8, 8, 4, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
  -8, 16, 8, 8,
  -8, 16, -4, 16, 16, -4,
  8, 4, 8, 8, 4, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
  8, -8, 16, 8, 8, -8, 16, 8, 4
};


//calculate the total length of the notes
size_t melLength = sizeof(mainMelody) / sizeof(mainMelody[0]);

void setup() {
  //buzzer output pin setup
  pinMode(BUZZERPIN, OUTPUT);
  pinMode(BUTTONPIN, INPUT_PULLUP);
}


void loop() {
  //variable set up
  unsigned long previousMillis = millis();
  unsigned long currentMillis;
  int noteDuration;

  //play music
  if (!digitalRead(BUTTONPIN)) {

    //main melody playing here
    for (int thisNote = 0; thisNote < melLength; thisNote++) {

      //dotted note logic
      mainNotes[thisNote] > 0 ? noteDuration = wholenote / mainNotes[thisNote] : noteDuration = (wholenote / (abs(mainNotes[thisNote]))) * 1.5;

      //play the sound
      tone(BUZZERPIN, mainMelody[thisNote], noteDuration * 0.9);

      // the note's duration time. This will keep pulling until the duration time is up
      do {
        currentMillis = millis();                                     //grab current time
      } while (!((currentMillis - previousMillis) >= noteDuration));  //check if time is long enough
      previousMillis = currentMillis;                                 //update previousmilli

      // stop the tone playing:
      noTone(BUZZERPIN);
    }
  }
}
