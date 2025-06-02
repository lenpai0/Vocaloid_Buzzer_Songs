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
  guess the vocaloid song compliation

  compilation of vocaloid buzzer songs. also the same code used for pt. 10 of guess the vocaloid song on tiktok.

  you can enable the LED by finding all the LED related code and uncomment it. it uses pin 3-7 

  please refer to the link for extra guide and source to the songs https://github.com/lenpai0/Vocaloid_Buzzer_Songs

  by Lenpai
*/

//make sure you make a pitch.h header file first
#include "pitch.h"

//OUTPUT
#define BUZZERPIN 8  //you can change this to any GPIO pin
#define BUTTONPIN 9

#define PLAY 1
#define NOPLAY 0

#define WLED B1000
#define RLED B10000
#define YLED B100000
#define GLED B1000000
#define BLED B10000000

//struct songInfo { };

// TEMPO
unsigned char tempo_buriki = 172;  // tempo of the song
unsigned char tempo_mcls = 192;
unsigned char tempo_electric = 150;
unsigned char tempo_melt = 170;
unsigned char tempo_world = 165;
unsigned char tempo_rolling = 195;
unsigned char tempo_cdb = 156;
unsigned char tempo_mesmerizer = 185;
unsigned char tempo_supernova = 105;
unsigned char tempo_vampire = 162;
unsigned char tempo_antenna = 147;
unsigned char tempo_senbonzakura = 154;
unsigned char tempo_yowamushi = 120;
unsigned char tempo_konton = 190;
unsigned char tempo_echo = 140;
unsigned char tempo_milkomeda = 175;
unsigned char tempo_bring = 160;
unsigned char tempo_reincarnation = 145;

extern const int* const melody[];
extern const char* notes[];

unsigned char tempo[] = { tempo_mcls, tempo_electric, tempo_mesmerizer, tempo_bring, tempo_supernova, tempo_world, tempo_antenna, tempo_cdb,
                          tempo_konton, tempo_melt, tempo_reincarnation, tempo_echo, tempo_buriki, tempo_rolling, tempo_yowamushi,
                          tempo_vampire, tempo_senbonzakura, tempo_milkomeda };

//playing? purely for debugging and testing
unsigned char playCheck[] = {
  PLAY, PLAY, PLAY, PLAY, PLAY, PLAY, PLAY, PLAY,
  PLAY, PLAY, PLAY, PLAY, PLAY, PLAY, PLAY,
  PLAY, PLAY, PLAY
};

extern size_t length_rolling, length_vampire, length_buriki, length_mcls, length_electric, length_melt, length_world, length_cdb, length_mesmerizer, length_supernova, length_antenna, length_senbonzakura, length_yowamushi, length_konton, length_echo, length_milkomeda, length_bring, length_reincarnation;

void setup() {

  //buzzer output pin setup
  pinMode(BUZZERPIN, OUTPUT);
  pinMode(BUTTONPIN, INPUT_PULLUP);

  //LED pin init
  //DDRD |= (RLED | YLED | GLED | WLED | BLED);
}


void loop() {
  //variable set up
  unsigned long previousMillis, currentMillis;
  int noteDuration, currentNote;
  int songi;
  unsigned int wholenote;
  char onBit;
  char onLED = 0;
  char ledi = 0;

  unsigned char melLength[] = {
    length_mcls, length_electric, length_mesmerizer, length_bring, length_supernova, length_world, length_antenna, length_cdb,
    length_konton, length_melt, length_reincarnation, length_echo, length_buriki, length_rolling, length_yowamushi,
    length_vampire, length_senbonzakura, length_milkomeda
  };
  size_t songLength = sizeof(melLength) / sizeof(melLength[0]);

  //wait for button to be pressed
  while (digitalRead(BUTTONPIN)) { ; }

  //start with one LED on
  //onBit = B1000;

  previousMillis = millis();

  //loop through each song
  for (songi = 0; songi < songLength; songi++) {
    int* melody_ptr = pgm_read_ptr(&melody[songi]);  //we need to do extra step bc we stored this in PROGMEM
    char* notes_ptr = notes[songi];
    wholenote = (60000 * 4) / tempo[songi];


    if (playCheck[songi]) {
      //main melody playing here

      for (int thisNote = 0; thisNote < melLength[songi]; thisNote++) {

        currentNote = pgm_read_word(melody_ptr);  //crazyyy space optimization btw
/*
        //led logic. if current note is not a rest shift led
        if (currentNote) {
          //bit shifting 00001000 -> 00010000
          onLED = onBit << ledi;

          //output
          PORTD = onLED;
          //inc
          ledi++;

          //overflow check
          if (ledi > 4) ledi = 0;
        }
*/
        //dotted note logic
        *notes_ptr > 0 ? noteDuration = wholenote / *notes_ptr : noteDuration = (wholenote / (abs(*notes_ptr))) * 1.5;

        //play the sound
        tone(BUZZERPIN, currentNote, noteDuration * 0.9);

        // the note's duration time. This will keep pulling until the duration time is up
        do {
          currentMillis = millis();                                     //grab current time
        } while (!((currentMillis - previousMillis) >= noteDuration));  //check if time is long enough
        previousMillis = currentMillis;                                 //update previousmilli

        // stop the tone playing:
        noTone(BUZZERPIN);

        //inc pointer to next element
        melody_ptr++;
        notes_ptr++;
      }
    }
  }

  //clear led output
  //PORTD = 0;
}
