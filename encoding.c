/*
  Authors: Rafay and Nicole

  compile: arm-linux-gcc -static -o encoding.exe encoding.c
  compile: gcc encoding.c -o encoding
  run: ./encoding
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>

#define ALPHABET_SIZE 100

typedef struct Character {
  wchar_t letter;
  char *binary;
} Character;

// Character encodings
Character map_array[ALPHABET_SIZE] = {
  {L'a', "000"},
  {L'A', "010"},
  {L'b', "100"},
  {L'B', "110"},
  {L'c', "0010"},
  {L'C', "0110"},
  {L'd', "1010"},
  {L'D', "1110"},
  {L'e', "00110"},
  {L'E', "01110"},
  {L'f', "10110"},
  {L'F', "11110"},
  {L'g', "001110"},
  {L'G', "011110"},
  {L'h', "101110"},
  {L'H', "111110"},
  {L'i', "0011110"},
  {L'I', "0111110"},
  {L'j', "1011110"},
  {L'J', "1111110"},
  {L'k', "00111110"},
  {L'K', "01111110"},
  {L'l', "10111110"},
  {L'L', "11111110"},
  {L'm', "001111110"},
  {L'M', "011111110"},
  {L'n', "101111110"},
  {L'N', "111111110"},
  {L'o', "0011111110"},
  {L'O', "0111111110"},
  {L'p', "1011111110"},
  {L'P', "1111111110"},
  {L'q', "00111111110"},
  {L'Q', "01111111110"},
  {L'r', "10111111110"},
  {L'R', "11111111110"},
  {L's', "001111111110"},
  {L'S', "011111111110"},
  {L't', "101111111110"},
  {L'T', "111111111110"},
  {L'u', "0011111111110"},
  {L'U', "0111111111110"},
  {L'v', "1011111111110"},
  {L'V', "1111111111110"},
  {L'w', "00111111111110"},
  {L'W', "01111111111110"},
  {L'x', "10111111111110"},
  {L'X', "11111111111110"},
  {L'y', "001111111111110"},
  {L'Y', "011111111111110"},
  {L'z', "101111111111110"},
  {L'Z', "111111111111110"},
  {L'0', "0011111111111110"},
  {L'1', "0111111111111110"},
  {L'2', "1011111111111110"},
  {L'3', "1111111111111110"},
  {L'4', "00111111111111110"},
  {L'5', "01111111111111110"},
  {L'6', "10111111111111110"},
  {L'7', "11111111111111110"},
  {L'8', "001111111111111110"},
  {L'9', "011111111111111110"},
  {L'!', "101111111111111110"},
  {L'@', "111111111111111110"},
  {L'#', "0011111111111111110"},
  {L'$', "0111111111111111110"},
  {L'~', "1011111111111111110"},
  {L'^', "1111111111111111110"},
  {L'&', "00111111111111111110"},
  {L'*', "01111111111111111110"},
  {L'(', "10111111111111111110"},
  {L')', "11111111111111111110"},
  {L'-', "001111111111111111110"},
  {L'[', "011111111111111111110"},
  {L']', "101111111111111111110"},
  {L'{', "111111111111111111110"},
  {L'}', "0011111111111111111110"},
  {L'|', "0111111111111111111110"},
  {L',', "1011111111111111111110"},
  {L'.', "1111111111111111111110"},
  {L'<', "00111111111111111111110"},
  {L'>', "01111111111111111111110"},
  {L'/', "10111111111111111111110"},
  {L'?', "11111111111111111111110"},
  {L'??', "001111111111111111111110"},
  {L'??', "011111111111111111111110"},
  {L'??', "101111111111111111111110"},
  {L'??', "111111111111111111111110"},
  {L'??', "0011111111111111111111110"},
  {L'??', "0111111111111111111111110"},
  {L'??', "1011111111111111111111110"},
  {L'??', "1111111111111111111111110"},
  {L'??', "00111111111111111111111110"},
  {L'??', "01111111111111111111111110"},
  {L'??', "10111111111111111111111110"},
  {L'??', "11111111111111111111111110"},
  {L'??', "001111111111111111111111110"},
  {L'??', "011111111111111111111111110"},
  {L'??', "101111111111111111111111110"},
  {L'??', "111111111111111111111111110"},
};

int main(int argc, char** argv) {
  setlocale(LC_ALL, "");

  // String to Encode
  wchar_t input[] = L"afCfaaKaaaIKIf3saFbFnAbfBEaba.HbdbafaRLAiC??bFabAbAhBcAej??jaabdc^cdabAIABfBeDAeDAdHbAaKbEcbb72DaCbeCA\n";

  // Local Variables
  register int i;
  register int j;
  register int len = wcslen(input);
  register size_t map_len = sizeof(map_array)/sizeof(map_array[0]);
  register wchar_t local_char, local_char_next, local_letter;
  register char* local_binary;
  char binary_string[5000] = "";

  // Software Pipelining
  local_char = (wchar_t)input[0];
  local_letter = (wchar_t)map_array[0].letter;
  local_binary = (char*)map_array[0].binary;

  for(i^=i; i < len; i++){
    for(j^=j; j < map_len; j+=2){
      if(local_char == local_letter){
        strcat(binary_string, local_binary);
      }
      local_letter = (wchar_t)map_array[j+1].letter;
      local_binary = (char*)map_array[j+1].binary;

      // Loop Unrolling
      if(local_char == local_letter){
        strcat(binary_string, local_binary);
      }
      // Software Pipelining
      local_letter = (wchar_t)map_array[j+2].letter;
      local_binary = (char*)map_array[j+2].binary;
    }
    // Software Pipelining
    local_letter = (wchar_t)map_array[0].letter;
    local_binary = (char*)map_array[0].binary;
    local_char = (wchar_t)input[i+1];
  }
  printf("%s\n", binary_string);

  return 0;
}
