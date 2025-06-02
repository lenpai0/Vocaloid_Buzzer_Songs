#include "pitch.h"
#include <avr/pgmspace.h>  //why do i need this here???

const int melody_buriki[] PROGMEM = {
  G5, C5, C5, C5, AS4, C5, G5, G5, F5, F5, F5, F5, DS5, F5, G5, G5, F5, F5, F5, F5,
  DS5, F5, AS5, G5, DS5, F5, G5, F5, DS5, G5,
  G5, C5, C5, C5, AS4, C5, G5, G5, AS5, C6, AS5, F5, G5, F5, F5, DS5, F5, G5, AS5,
  F5, G5, AS5, C6, AS5, C6
};

const int melody_mcls[] PROGMEM = {
  E6, A5, E6, A5, B5, C6, B5, A5, E5, FS5, A5, E5, FS5, A5, A5, B5, A5, FS6, E6,
  B5, CS6, CS6, B5, A5, E6, A5, E6, A5, B5, C6, B5, A5, E5, FS5, A5, E5, FS5, A5,
  B5, CS6, B5, A5, A5
};

const int melody_electric[] PROGMEM = {
  E5, FS5, GS5, CS5, GS5, B5, GS5, B5, CS6, E6, DS6, B5, GS5,
  E5, FS5, GS5, B5, CS6, B5, FS5, FS5, GS5, FS5, E5, CS5,
  B4, CS5, E5, CS5, E5, FS5, E5, FS5, GS5, B5, GS5, FS5, E5, GS5,
  B5, CS6, B5, GS5, B5, FS5, E5, FS5, GS5, B4, CS5
};

const int melody_melt[] PROGMEM = {
  FS4, D4, D4, REST, G3, REST, G4, FS4, E4, D4, E4, FS4, E4, FS4, REST,
  FS3, G3, D4, CS4, D4, A3, A3, E4, D4, D4, REST, A3, D4, E4, CS4

};

const int melody_world[] PROGMEM = {
  F5, C6, F5, F5, DS5, DS5, F5, F5, G5, GS5, G5, F5, DS5, C6,
  DS5, F5, C6, F5, F5, DS5, F5, F5, F5, F5, GS5, GS5, C6,
  DS6,  //REST, //REST,  // miku holds this note too long i dont have any work around the blip :sob:

  //DS5, F5
};

const int melody_rolling[] PROGMEM = {
  D5, D5, D5, REST, CS5, D5, D5, REST, D5, D5, D5, D5, D5, CS5, D5, A5, D5, D5, CS5,
  D5, REST, A4, B4, FS5, E5, REST, A4, FS5, E5, REST, D5, D5, D5, D5, D5, CS5, D5,
  A5, A5, A5, A5, B5, A5
};

const int melody_cdb[] PROGMEM = {
  C5, G5, F5, DS5, C5, F5, F5, F5, G5, AS5, G5, F5, C5, G5, F5, DS5, C5, F5, F5, F5,
  G5, AS5, G5, F5, DS5, G5, AS5, C6, C6, C6, AS5, G5, AS5, G5, F5, DS5,
  FS4, F4, DS4, C4, AS3, C4, REST, AS3, C4, C4, C4, REST, AS3, FS4, F4  //, REST

};

const int melody_mesmerizer[] PROGMEM = {
  CS5, DS5, F5, GS5, GS5, AS5, GS5, GS5, AS5, GS5, FS5, F5, DS5, CS5, DS5, CS5, DS5, CS5,
  DS5, F5, REST, F5, F5, FS5, F5, FS5, F5, DS5, CS5, GS5, GS5, AS5, GS5, GS5, AS5, GS5,
  FS5, F5, DS5, CS5, DS5, CS5, DS5, CS5, DS5, CS6, AS5, AS5, GS5, FS5, F5, FS5, F5, FS5
};

const int melody_supernova[] PROGMEM = {
  GS5, GS5, FS5, E5, FS5, CS5, REST, B4, CS5, CS5, B4, CS5, CS4, REST,
  CS5, CS5, CS5, REST, B4, CS5, CS5, CS5, CS5, CS4, REST,
  CS5, CS5, CS5, CS5, REST, CS5, CS5, CS5, REST, C5, CS5, CS5, REST,
  CS4, REST, CS5, CS5, CS5, REST, CS5, CS5, CS5, CS5, GS5, FS5, REST,
  GS5, FS5, GS5

};

const int melody_vampire[] PROGMEM = {
  GS4, FS4, E4, FS4, E4, E4, E5, REST, GS4, REST, FS4, REST, E4, REST, E5, REST,
  GS4, FS4, E4, REST, FS4, E4, FS4, E4, GS4, FS4, REST, CS5, CS5, C5, CS5, DS5,
  GS4, CS5, DS5, E5, GS4, FS4, REST, E5, REST, FS5, FS5, E5, FS5, GS5, FS5, E5, E5, REST,
  GS5, FS5, E5, FS5, E5
};

const int melody_antenna[] PROGMEM = {
  C5, C5, C5, C5, D5, REST, C5, D5, C5, AS4, G4, G4, G4, G4, G4, G4, G4, G4, G4, G4,
  AS4, C5, D5, F5, DS5, D5, REST,

  D5, C5, D5, C5, D5, G4, REST, D5, C5, D5, C5, D5, G4, D5, C5, D5, G4, REST, G4, D5, C5, REST,
  AS4, REST, A4, FS4, REST, G4, G4, A4, A4, AS4, AS4, C5
};

const int melody_senbonzakura[] PROGMEM = {
  D5, F5, G5, G5, A5, A5, A5, C6, D6, G5, F5, A5, D5, F5, G5, G5, A5, A5, A5, AS5,
  A5, G5, F5, F5, D5, F5, G5, G5, A5, A5, A5, C6, D6, G5, F5, A5, D5, F5, AS5, A5,
  G5, F5, G5, F5, A5, C6, D6
};

const int melody_yowamushi[] PROGMEM = {
  AS3,
  DS4,
  REST,
  F4,
  DS4,
  C4,
  REST,
  C4,
  AS3,
  C4,
  AS3,
  REST,
  AS3,
  DS4,
  F4,
  DS4,
  C4,
  REST,
  C4,
  AS3,
  C4,
  AS3,
  REST,
  AS3,
  DS4,
  DS4,
  F4,
  DS4,
  C4,
  REST,
  C4,
  AS3,
  C4,
  AS3,
  REST,
  AS3,
  DS4,
  F4,
  DS4,
  C4,
  REST,
  AS3,
  DS4,
  D4,
  D4,
  DS4,
};

const int melody_konton[] PROGMEM = {
  A5, A5, A5, E5, A5, B5, C6, C6, C6, B5, C6, D6, DS6, E6, A5, REST, F5, DS6, E6, A5, REST,
  GS5, GS5, A5, A5, A5, E5, A5, B5, C6, C6, C6, D6, DS6, E6, D6, C6, B5, C6, B5,
  REST, C6, B5, A5, GS5
};

const int melody_echo[] PROGMEM = {
  //what the hell is going on can someone tell me please?
  GS4, REST, FS4, GS4, REST, GS4, FS4, REST, GS4, REST, AS4, REST, B4, AS4, REST, GS4, FS4, REST, DS4, REST,

  //why am i switching faster than the colours on tv?
  GS4, FS4, REST, FS4, DS4, REST, DS4, CS4, REST, CS4, B3, REST, CS4, B3, REST, CS4, DS4, REST, DS4, REST,

  //im black no im white no something isnt right!
  FS4, GS4, REST, GS4, FS4, REST, GS4, REST, AS4, REST, B4, AS4, REST, GS4, FS4, REST, DS4,

  //my enemy is invisible i dont know how to fight
  FS4, REST, GS4, FS4, REST, FS4, DS4, REST, DS4, CS4, REST, CS4, B3, REST, CS4, B3, REST, CS4, DS4, REST, DS4, REST,  //REST,

};

const int melody_milkomeda[] PROGMEM = {
  //beginning
  F5, G5, F5, DS5, F5, F5, G5, F5, DS5, C5, C5, DS5, DS5, F5, F5, G5, DS5,

  //vocals
  F5, F5, DS5, F5, G5, F5, DS5, F5, G5, REST, C5, DS5, F5, F5, DS5,
  F5, G5, F5, DS5, F5, DS5, REST, C5, DS5, F5, F5, DS5, F5, G5, F5,
  DS5, F5, G5, REST, G5, F5, DS5, F5, AS5, G5, D5, AS4, G5, AS5,
  C6, AS5, G5, F5, DS5, G5, F5, G5, F5, DS5, DS5, REST, C5, G5, F5,
  C5, G5, F5, G5, F5, DS5, DS5, C5, C5, AS4, C5, G5, G5, AS5, G5,
  AS5, G5, AS5, G5, AS5, AS5, C6, AS5, C6, AS5, C6, AS5, C6, AS5,
  C6, DS6, C6
};

const int melody_bring[] PROGMEM = {
  FS4, REST, FS4, REST, FS4, E4, FS4, GS4, A4, REST, A4, REST,
  A4, GS4, A4, B4, CS5, REST, CS5, B4, CS5, E5, A4, GS4, GS4, E5, GS4, A4, GS4, CS4, REST,

  FS4, REST, FS4, REST, FS4, E4, FS4, GS4, A4, REST, A4, A4, CS5, E5, F5, FS5, FS4, FS5,
  REST, FS5, FS4, FS5, A5, B5, A5, GS5, A5,

  //E4, E5, CS5, REST, E3, E4, CS4, REST, E4, E5, CS5, REST, E3, E4, CS4, REST, E4, E5, FS5, REST,
  //E3, E4, FS4, REST, E4, E5, FS5, E5, CS5, B4, CS5, E5, E4, CS5
};

const int melody_reincarnation[] PROGMEM = {
  CS4, D4, D4, D4, D4, D5, REST,
  //chorus
  C5, D5, REST, C4, D5, D5, D5, C4, D4, D5, D5, D5, C5, G4, G4, A4, REST,
  C4, D5, D5, D5, D5, C4, D5, D5, D5, D5, D5, D5, E5, D5, D5, REST,
  D4, D5, D5, D5, C4, G4, G4, D5, D5, D5, D5, C5, G4, G4, A4, REST,
  E5, E5, D5, REST,

  E5, E5, D5, E5, D5, C5
};

const char notes_buriki[] = {
  8, 16, 16, 8, 8, 8, 8, 4, 8, 16, 16, 8, 8, 8, 8, 4, 8, 16, 16, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 2,
  8, 16, 16, 8, 8, 8, 8, 8, 8, 4, 8, 8, 2, 4, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 2
};

const char notes_mcls[] = {
  4, 4, 4, 8, 8, 8, 4, 4, 8, 8, 4, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 4, 4, 4,
  8, 8, 8, 4, 4, 8, 8, 4, 8, 8, 8, 8, 8, 8, 8, 4
};

const char notes_electric[] = {
  8, 8, 4, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4,
  8, 8, 4, 8, 8, 4, 4, 8, 8, 8, 8, 4,
  8, 8, 4, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8,
  8, 8, 8, 8, 8, 4, 8, 8, 4, 4, 2
};

const char notes_melt[] = {
  -4, 8, 8, 8, 8, 8, 4, 4, 4, 4, 4, 8, 8, -4, 8,
  4, 4, 4, 4, -4, 4, 4, 4, 8, 8, 4, 4, 2, 2, 2

};

const char notes_world[] = {
  4, -2, 8, 8, -4, 8, 4, 8, 8, 4, 4, 4, 4, 2,
  4, 4, 2, 4, 4, 4, 4, -4, 8, -4, 8, 2, -2,
  1,  //8, //-8,  //two rest note

  //8, 8
};

const char notes_rolling[] = {
  4, 4, 4, 8, -4, 4, 4, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 4, 4, 4, 4, 8, -4, 4, 4,
  8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 2
};

const char notes_cdb[] = {
  8, 8, 8, 8, 8, 4, 4, 8, 8, 8, 8, -4, 8, 8, 8, 8, 8, 4, 4, 8, 8, 8, 8, -4, 8,
  4, 4, 4, 4, 8, 8, 8, 4, 8, 8, 4,
  8, 8, 8, 8, 16, 16, 16, 16, 8, 16, 16, 16, 16, 8, -4,  //-8

};

const char notes_mesmerizer[] = {
  4, 8, 8, 4, 8, 8, 4, 8, 8, 4, 4, 4, 8, 8, 8, 8, 8, 8, 8, 8, 16, 16, 4, 8, 8, 8, 4, 8, 8,
  4, 8, 8, 4, 8, 8, 4, 4, 4, 8, 8, 8, 8, 8, 8, 8, 4, 4, 8, 8, 8, 8, 8, 8, 4
};

const char notes_supernova[] = {
  16, 16, 16, 16, 8, 8, 16, 16, 16, 8, 16, -8, 16, 16,
  16, 16, 16, 16, 16, 16, 16, 8, 8, 8, -8,
  16, 16, 16, 8, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
  16, 16, 16, 16, 16, 16, 16, 8, 8, 8, 8,
  16, 16, 8
};

const char notes_vampire[] = {
  8, 8, 8, 8, 8, 4, 8, 8, 8, 16, 8, 16, 8, 8, 8, 8, 8, -8, 8, 16, 4, 8, 8, 8,
  -8, 8, 16, 4, 8, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 4, 8, 8, 8, 4, 8, 8, 8, 8,
  4, 8, 8, 8, 2
};

const char notes_antenna[] = {
  16, 16, 8, 8, 8, 8, 8, 8, -8, -8, 4, 16, 16, 8, 16, 16, 8, 16, 16, 8, 8, 4, 4, -8, -8, -4,
  8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 16, 8, 16, 4, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, -8, 16, 8, 4,
  8, 8, 8, 8, 8, 4
};

const char notes_senbonzakura[] = {
  8, 8, -8, -8, 8, -4, 8, 8, 8, 8, 8, 4, 8, 8, -8, -8, 8, -4, 8, 8, 8, 8, 8, 4,
  8, 8, -8, -8, 8, -4, 8, 8, 8, 8, 8, 4, 8, 8, 4, 4, 4, 4, 8, 8, 8, 8, 2
};

const char notes_yowamushi[] = {
  8, 16, -8, 8, 8, 4, 8, 8, 4, 4, 4, 8, 8, 4, 8, 8, 4, 8, 8, 4, 4, 4, 8,
  8, 8, 8, 8, 8, 4, 8, 8, 4, 4, 4, 8, 8, 4, 8, 8, 4, 4, 4, 4, 4, 8, 4
};

const char notes_konton[] = {
  4, 4, 8, 8, 8, 8, 4, 4, 8, 8, 8, 8, 4, 4, 16, 16, 8, 4, 4, 16, 16,
  8, 4, 4, 4, 8, 8, 8, 8, 4, 4, 8, 8, 8, 8, 4, 4, 4, 4, 4, 8, 8, 8, 8, 4
};

const char notes_echo[] = {
  //what the hell is going on can someone tell me please?
  16, 16, 8, 8, 8, 8, 16, 16, 8, 8, 8, 8, 8, 16, 16, 8, 16, 16, 4, 4,

  //why am i switching faster than the colours on tv?
  8, 16, 16, 8, 16, 16, 8, 16, 16, 8, 16, 16, 8, 16, 16, 8, 16, 16, 8, 8,

  //im black no im white no something isnt right!
  4, 8, 8, 8, 16, 16, 8, 8, 8, 8, 8, 16, 16, 8, 16, 16, 4,

  //my enemy is invisible i dont know how to fight
  8, 8, 8, 16, 16, 8, 16, 16, 8, 16, 16, 8, 16, 16, 8, 16, 16, 8, 16, 16, 8, 4
};

const char notes_milkomeda[] = {
  16, 16, 8, 8, 8, 16, 16, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 4, 8,

  8, 8, 8, 8, 8, 4, 4, 4, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 4, 4, 8,
  8, 4, 8, 8, 8, 8, 8, 8, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 8, 8,
  4, 8, 8, 4, 8, 8, 4, 4, 8, 8, 4, 4, 8, 8, 4, 8, 8, 4, 4, 8, 8,
  4, 4, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 4, 4, 4
};

const char notes_bring[] = {
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 4,
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 4, 8, 8, 8, -8,  //8, 8, 8, 8,
  //8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, -2
};

const char notes_reincarnation[] = {
  8, 4, 8, 8, 8, 8, 8,

  8, 8, 8, 8, 8, 4, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
  -8, 16, 8, 8,

  -8, 16, -4, 16, 16, 2
};


size_t length_buriki = sizeof(melody_buriki) / sizeof(melody_buriki[0]);
size_t length_mcls = sizeof(melody_mcls) / sizeof(melody_mcls[0]);
size_t length_electric = sizeof(melody_electric) / sizeof(melody_electric[0]);
size_t length_melt = sizeof(melody_melt) / sizeof(melody_melt[0]);
size_t length_world = sizeof(melody_world) / sizeof(melody_world[0]);
size_t length_cdb = sizeof(melody_cdb) / sizeof(melody_cdb[0]);
size_t length_mesmerizer = sizeof(melody_mesmerizer) / sizeof(melody_mesmerizer[0]);
size_t length_supernova = sizeof(melody_supernova) / sizeof(melody_supernova[0]);
size_t length_antenna = sizeof(melody_antenna) / sizeof(melody_antenna[0]);
size_t length_senbonzakura = sizeof(melody_senbonzakura) / sizeof(melody_senbonzakura[0]);
size_t length_yowamushi = sizeof(melody_yowamushi) / sizeof(melody_yowamushi[0]);
size_t length_konton = sizeof(melody_konton) / sizeof(melody_konton[0]);
size_t length_echo = sizeof(melody_echo) / sizeof(melody_echo[0]);
size_t length_milkomeda = sizeof(melody_milkomeda) / sizeof(melody_milkomeda[0]);
size_t length_bring = sizeof(melody_bring) / sizeof(melody_bring[0]);
size_t length_reincarnation = sizeof(melody_reincarnation) / sizeof(melody_reincarnation[0]);
size_t length_rolling = sizeof(melody_rolling) / sizeof(melody_rolling[0]);
size_t length_vampire = sizeof(melody_vampire) / sizeof(melody_vampire[0]);

// oh boy pointers (havent used them in a hot while)
const int* const melody[] PROGMEM = {
  melody_mcls, melody_electric, melody_mesmerizer, melody_bring, melody_supernova, melody_world, melody_antenna, melody_cdb,
  melody_konton, melody_melt, melody_reincarnation, melody_echo, melody_buriki, melody_rolling, melody_yowamushi,
  melody_vampire, melody_senbonzakura, melody_milkomeda
};


const char* notes[] = {
  notes_mcls, notes_electric, notes_mesmerizer, notes_bring, notes_supernova, notes_world, notes_antenna, notes_cdb,
  notes_konton, notes_melt, notes_reincarnation, notes_echo, notes_buriki, notes_rolling, notes_yowamushi,
  notes_vampire, notes_senbonzakura, notes_milkomeda
};