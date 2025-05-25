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

  vampire short buzzer cover

  ヴァンパイア (The Vampire) / DECO*27: https://www.youtube.com/watch?v=e1xCOsgWG0M

  piano cover borrowed / aregan - piano: https://www.youtube.com/watch?v=IveO0h3rq-s

  by Lenpai

*/

//make sure you make a pitch.h header file first
#include "pitch.h"


//OUTPUT
#define BUZZERPIN 8  //you can change this to any GPIO pin
#define BUTTONPIN 9

int tempo = 162; //tempo of the song

// this calculates the duration of a whole note in ms (60s/tempo)*4 beats
int wholenote = (60000 * 4) / tempo;

int mainMelody[] = {
  GS4, FS4, E4, FS4, E4, E4, E5, REST, GS4, REST, FS4, REST, E4, REST, E5, REST,
  GS4, FS4, E4, REST, FS4, E4, FS4, E4, GS4, FS4, REST, CS5, CS5, C5, CS5, DS5,
  GS4, CS5, DS5, E5, GS4, FS4, REST, E5, REST, FS5, FS5, E5, FS5, GS5, FS5, E5, E5, REST,
  GS5, FS5, E5, FS5, E5
};


//Negative number will represent the dotted note. ex -8 will play a dotted eighth note
/* 1 = WHOLE NOTE    
   2 = HALF NOTE
   4 = QUARTER NOTE
   8 = EIGHTH NOTE  
  16 = SIXTEENTH NOTE */
int mainNotes[] = {
  8, 8, 8, 8, 8, 4, 8, 8, 8, 16, 8, 16, 8, 8, 8, 8, 8, -8, 8, 16, 4, 8, 8, 8,
  -8, 8, 16, 4, 8, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 4, 8, 8, 8, 4, 8, 8, 8, 8,
  4, 8, 8, 8, 2,
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
