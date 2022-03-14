/**
 * Made with Marlin Bitmap Converter
 * https://marlinfw.org/tools/u8glib/converter.html
 */
#pragma once

#define CUSTOM_BOOTSCREEN_BMPWIDTH  128
#define CUSTOM_BOOTSCREEN_BMPHEIGHT 64

const unsigned char custom_start_bmp[] PROGMEM = {
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ································································
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ································································
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ································································
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ································································
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00001111,B11111111,B11000000,B00000000,B11111100,B00000000,B00000000,B00000000,B00000000,B00000000, // ··························███████·······███·····················
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,B11100000,B00000000,B00000000,B00000000,B00000000, // ···········································▐█▌··················
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111100,B00000000,B00000000,B00000000,B00000000, // ·············································██·················
  B00000000,B00000000,B00000000,B00000000,B00000010,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00001110,B00000000,B00000000,B00000000,B00000000, // ···················▌··························█▌················
  B00000000,B00000000,B00000000,B00000000,B00001000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000011,B10000000,B00000000,B00000000,B00000000, // ··················▌····························█▌···············
  B00000000,B00000000,B00000000,B00000000,B00010000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,B10000000,B00000000,B00000000,B00000000, // ·················▐·····························▐▌···············
  B00000000,B00000000,B00000000,B00000000,B00100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,B11000000,B00000000,B00000000,B00000000, // ·················▌·····························▐█···············
  B00000000,B00000000,B00000000,B00000000,B01100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,B11000000,B00000000,B00000000,B00000000, // ················▐▌·····························▐█···············
  B00000000,B00000000,B00000000,B00000000,B11100000,B00000001,B11111111,B11111100,B00000000,B00000000,B00000000,B00000001,B10000000,B00000000,B00000000,B00000000, // ················█▌·····▐███████················▐▌···············
  B00000000,B00000000,B00000000,B00000000,B11000000,B00000111,B11111111,B11111111,B00000000,B00000000,B00000000,B00000001,B00000000,B00000000,B00000000,B00000000, // ················█·····▐█████████···············▐················
  B00000000,B00000000,B00000000,B00000000,B11000000,B00001111,B11111111,B11111111,B10000000,B00000000,B00000000,B00000011,B00000000,B00000000,B00000000,B00000000, // ················█·····██████████▌··············█················
  B00000000,B00000000,B00000000,B00000000,B11000000,B00011111,B11111111,B11111111,B11000000,B00000000,B00000000,B00000010,B00000000,B00000000,B00000000,B00000000, // ················█····▐███████████··············▌················
  B00000000,B00000000,B00000000,B00000000,B11100000,B00001111,B11111111,B11111111,B11000000,B00111111,B10000000,B00000100,B00000000,B00000000,B00000000,B00000000, // ················█▌····███████████····███▌·····▐·················
  B00000000,B00000000,B00000000,B00000000,B11100000,B00001111,B11111111,B11111111,B11000001,B11111111,B11000000,B00001000,B00000000,B00000000,B00000000,B00000000, // ················█▌····███████████··▐█████·····▌·················
  B00000000,B00000000,B00000000,B00000000,B01110000,B00000111,B11111111,B11111111,B11000011,B11111111,B11100000,B00100000,B00000000,B00000000,B00000000,B00000000, // ················▐█····▐██████████··██████▌···▌··················
  B00000000,B00000000,B00000000,B00000000,B00111000,B00000001,B11111111,B11111111,B10000011,B11111111,B11000000,B01000000,B00000000,B00000000,B00000000,B00000000, // ·················█▌····▐████████▌··██████···▐···················
  B00000000,B00000000,B00000000,B00000000,B00011110,B00000000,B01111111,B11111110,B00000000,B01111110,B00000001,B10000000,B00000000,B00000000,B00000000,B00000000, // ·················▐█▌····▐██████▌····▐██▌···▐▌···················
  B00000000,B00000000,B00000000,B00000000,B00000111,B10000000,B00000011,B11000000,B00000000,B00000000,B00000000,B01111000,B00000000,B00000000,B00000000,B00000000, // ··················▐█▌······██···············▐█▌·················
  B00000000,B00000000,B00000000,B00000000,B00000000,B01111000,B00000000,B00000000,B01111100,B00000000,B00000000,B00011000,B00000000,B00000000,B00000000,B00000000, // ····················▐█▌·········▐██··········▐▌·················
  B00000000,B00000000,B00000000,B00000000,B00000000,B00011110,B00000000,B00000001,B11111110,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ·····················▐█▌·······▐███▌····························
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ·······························▐█·······························
  B00000000,B00000000,B00000000,B00000000,B00000001,B10000000,B00000000,B00000000,B00000000,B00000000,B01000000,B00000000,B00000000,B11000000,B00000000,B00000000, // ···················▐▌···················▐···········█···········
  B00000000,B00000000,B00000111,B01100000,B00000001,B11111111,B11111100,B00000000,B00000000,B00000000,B10000000,B00000000,B00000111,B00111000,B00000000,B00000000, // ··········▐█▐▌·····▐███████·············▌·········▐█·█▌·········
  B00000000,B00000000,B00011000,B00001100,B00000000,B00000000,B00000111,B00000001,B11000011,B11000001,B00000000,B00000000,B00011000,B00000111,B00000000,B00000000, // ·········▐▌···█···········▐█···▐█··██··▐·········▐▌···▐█········
  B00000000,B00000000,B11110000,B00000011,B10000000,B00000000,B00000011,B10000011,B11111000,B11100100,B00000000,B00000000,B11000000,B00000011,B10000000,B00000000, // ········██·····█▌··········█▌··███▌·█▌▐·········█······█▌·······
  B00000000,B00000000,B00011000,B00000000,B01110000,B00000000,B00000001,B11000100,B00000000,B01110000,B00000000,B00000110,B00000000,B00001100,B00000000,B00000000, // ·········▐▌·····▐█·········▐█·▐·····▐█········▐▌······█·········
  B00000000,B00000000,B00000111,B00000000,B00001100,B00000000,B00000000,B11110000,B00000000,B00000000,B00000000,B00111000,B00000000,B01100000,B00000000,B00000000, // ··········▐█······█·········██···············█▌·····▐▌··········
  B00000000,B00000000,B00000000,B11100000,B00000001,B10000000,B00001111,B10000000,B00000000,B11001110,B00000001,B11000000,B00000011,B10000000,B00000000,B00000000, // ············█▌·····▐▌·····██▌·······█·█▌···▐█······█▌···········
  B00000000,B00000000,B00000000,B00011000,B00000000,B00110000,B01100000,B00100000,B00000011,B00000001,B11001110,B00000000,B00011100,B00000000,B00000000,B00000000, // ·············▐▌······█··▐▌···▌·····█···▐█·█▌·····▐█·············
  B00000000,B00000000,B00000000,B00000011,B00000000,B00001111,B00000000,B00111000,B00001111,B00000000,B00111100,B00000000,B01100000,B00000000,B00000000,B00000000, // ···············█······██·····█▌···██·····██·····▐▌··············
  B00000000,B00000000,B00000000,B00000000,B11100000,B00011000,B00000000,B00000000,B11000000,B00000000,B00000111,B00000011,B00000000,B00000000,B00000000,B00000000, // ················█▌···▐▌·········█·········▐█···█················
  B00000000,B00000000,B00000000,B00000000,B00011100,B11000000,B00000000,B00000011,B10000000,B00000000,B00000000,B11111100,B00000000,B00000000,B00000000,B00000000, // ·················▐█·█··········█▌···········███·················
  B00000000,B00000000,B00000000,B00000000,B00001111,B00000000,B00011000,B00110001,B11000000,B00000111,B00000000,B00111000,B00000000,B00000000,B00000000,B00000000, // ··················██·····▐▌··█·▐█·····▐█·····█▌·················
  B00000000,B00000000,B00000000,B00000000,B00011000,B00000000,B11000000,B11100000,B00000000,B00000000,B11100000,B00000111,B00000000,B00000000,B00000000,B00000000, // ·················▐▌·····█···█▌··········█▌····▐█················
  B00000000,B00000000,B00000000,B00000000,B01100000,B00000010,B00000111,B11100000,B00000111,B00000000,B00000000,B00000001,B10000000,B00000000,B00000000,B00000000, // ················▐▌·····▌··▐██▌····▐█···········▐▌···············
  B00000000,B00000000,B00000000,B00000000,B11000000,B00000000,B00110000,B00000000,B00000000,B11100000,B00000000,B00000001,B10000000,B00000000,B00000000,B00000000, // ················█········█··········█▌·········▐▌···············
  B00000000,B00000000,B00000000,B00000000,B00100000,B10000000,B11110000,B00000000,B00000000,B00011000,B00000000,B11111110,B00000000,B00000000,B00000000,B00000000, // ·················▌··▌···██···········▐▌·····███▌················
  B00000000,B00000000,B00000000,B00000000,B00000011,B10001100,B00110000,B00000000,B11100000,B00000000,B00000000,B11100000,B00000000,B00000000,B00000000,B00000000, // ···················█▌·█··█······█▌··········█▌··················
  B00000000,B00000000,B00000000,B00000000,B00000000,B00111000,B00000000,B00000000,B00011000,B00000000,B01100001,B10000000,B00000000,B00000000,B00000000,B00000000, // ·····················█▌··········▐▌·····▐▌·▐▌···················
  B00000000,B00000000,B00000000,B00000000,B00000011,B11111000,B00000000,B11100000,B00000000,B00000000,B00111000,B00000000,B00000000,B00000000,B00000000,B00000000, // ···················███▌·····█▌···········█▌·····················
  B00000000,B00000000,B00000000,B00110011,B00001100,B00000000,B00000000,B00011100,B00000000,B00000000,B01100000,B00011000,B00011110,B00000000,B00000000,B00000000, // ·············█·█··█··········▐█·········▐▌···▐▌··▐█▌············
  B00000000,B00000000,B00000001,B10000000,B01111100,B00000000,B00000000,B00000111,B00000000,B00111111,B00000000,B00001100,B11000000,B11000000,B00000000,B00000000, // ···········▐▌···▐██···········▐█·····███······█·█···█···········
  B00000000,B00000000,B00001100,B00000000,B00011111,B00000000,B00011100,B00000000,B00000000,B00011000,B00000000,B00011110,B00000000,B00011000,B00000000,B00000000, // ··········█······▐██·····▐█··········▐▌······▐█▌·····▐▌·········
  B00000000,B00000000,B01100000,B00000000,B00000011,B11100000,B00000111,B00000000,B00011100,B01100000,B00000000,B11111000,B00000000,B00000110,B00000000,B00000000, // ········▐▌·········██▌····▐█·····▐█·▐▌······██▌·······▐▌········
  B00000000,B00000011,B10000000,B00000000,B00000000,B01111100,B00000000,B00000000,B00001110,B00000000,B00000111,B11000000,B00000000,B00000000,B11000000,B00000000, // ·······█▌···········▐██···········█▌······▐██···········█·······
  B00000000,B00000011,B00000000,B00000000,B00000000,B00001111,B00000000,B00000000,B00011100,B00000000,B00011110,B00000000,B00000000,B00000000,B01110000,B00000000, // ·······█··············██·········▐█······▐█▌············▐█······
  B00000000,B00000000,B01100000,B00000000,B00000000,B00000011,B11100000,B00000111,B10000000,B00000000,B11110000,B00000000,B00000000,B00000001,B11000000,B00000000, // ········▐▌·············██▌····▐█▌·······██·············▐█·······
  B00000000,B00000000,B00001100,B00000000,B00000000,B00000000,B01111100,B00000110,B00010000,B00000111,B11000000,B00000000,B00000000,B00000110,B00000000,B00000000, // ··········█·············▐██···▐▌·▐····▐██·············▐▌········
  B00000000,B00000000,B00000011,B00000000,B00000011,B11000000,B00001111,B11111000,B00011000,B00111110,B00000000,B00000000,B00000000,B00110000,B00000000,B00000000, // ···········█·······██·····████▌··▐▌··██▌·············█··········
  B00000000,B00000000,B00000011,B11100000,B00001111,B11111000,B00000001,B11000000,B00000000,B11110000,B00000011,B11111100,B00000001,B11100000,B00000000,B00000000, // ···········██▌····████▌····▐█·······██·····████····▐█▌··········
  B00000000,B00000000,B00011100,B00011100,B00001111,B11110000,B00000000,B01100000,B00000001,B10000000,B00000111,B11111100,B00001110,B00011100,B00000000,B00000000, // ·········▐█··▐█···████······▐▌·····▐▌·····▐████···█▌·▐█·········
  B00000000,B00000000,B00111000,B00000011,B10000000,B00000000,B00000000,B00111000,B00000110,B00000000,B00000001,B11111000,B01110000,B00001110,B00000000,B00000000, // ·········█▌····█▌············█▌···▐▌·······▐██▌·▐█····█▌········
  B00000000,B00000000,B00100000,B00001110,B01100000,B00000011,B11100000,B11000000,B00000001,B10000000,B01111000,B00000001,B10111000,B00000011,B00000000,B00000000, // ·········▌····█▌▐▌·····██▌··█······▐▌···▐█▌····▐▌█▌····█········
  B00000000,B00000000,B00000111,B00000000,B00001100,B00000001,B10000110,B00000000,B00000000,B01110000,B11111000,B00001100,B00000000,B11100000,B00000000,B00000000, // ··········▐█······█····▐▌·▐▌········▐█··██▌···█·····█▌··········
  B00000000,B00000000,B00000000,B00000000,B00000001,B10000000,B00011000,B00000000,B00000000,B00001100,B00000000,B01100000,B00000000,B00000000,B00000000,B00000000, // ···················▐▌····▐▌···········█·····▐▌··················
  B00000000,B00000000,B00000000,B00000000,B00000000,B00110000,B11000000,B00000000,B00000000,B00000001,B10000011,B10000000,B00000000,B00000000,B00000000,B00000000, // ·····················█··█··············▐▌··█▌···················
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000110,B00000000,B00000000,B00000000,B00000000,B00111100,B00000000,B00000000,B00000000,B00000000,B00000000, // ······················▐▌·················██·····················
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ································································
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ································································
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000  // ································································
};
