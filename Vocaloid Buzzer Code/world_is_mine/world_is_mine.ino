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

  world is mine short buzzer cover

  ワールドイズマイン (World is Mine)  / ryo: https://www.nicovideo.jp/watch/sm3504435

  piano cover borrowed / Alexander Siegrist: https://www.youtube.com/watch?v=88Pb8fsHP7g

  by Lenpai

*/

//make sure you make a pitch.h header file first
#include "pitch.h"


//OUTPUT
#define BUZZERPIN 8  //you can change this to any GPIO pin
#define BUTTONPIN 9

int tempo = 165; // tempo of the song

// this calculates the duration of a whole note in ms (60s/tempo)*4 beats
int wholenote = (60000 * 4) / tempo;

int mainMelody[] = {
  F5, C6, F5, F5, DS5, DS5, F5, F5, G5, GS5, G5, F5, DS5, C6,
  DS5, F5, C6, F5, F5, DS5, F5, F5, F5, F5, GS5, GS5, C6, 
  DS6, DS6, REST, REST, // miku holds this note too long i dont have any work around the blip :sob:

  DS5, F5, F4, F4, F4, REST, GS4, F4, REST, F4, F4, REST, GS4, AS4, REST,
  F4, F4, REST, GS4, F4, REST, F4, F4, REST, GS4, AS4, F4, F4, F4, REST,
  GS4, F4, REST, F4, F4, REST, GS4, AS4, CS5
};


//Negative number will represent the dotted note. ex -8 will play a dotted eighth note
/* 1 = WHOLE NOTE    
   2 = HALF NOTE
   4 = QUARTER NOTE
   8 = EIGHTH NOTE  
  16 = SIXTEENTH NOTE */
int mainNotes[] = {    
  4, -2, 8, 8, -4, 8, 4, 8, 8, 4, 4, 4, 4, 2,
  4, 4, 2, 4, 4, 4, 4, -4, 8, -4, 8, 2, -2, 
  -1, 1, 2, -8,  //two rest note

  8, 8, 8, 8, 8, 8, -4, 8, 8, 8, 8, 8, 4, 4, 8, 8, 8, 8,
  -4, 8, 8, 8, 8, 8, 8, -4, 8, 8, 8, 8, -4, 8, 8, 8, 8, 8,
  4, 4, -2
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
