/*
  Authors: Rafay and Nicole

  Encoding - given a set of letters transmit binary
  Decoding - given a binary string, return letters

  compile: gcc encoding.c -o encoding
  run: ./encoding

  Notes:
  '+' means an empty node
  wchar_t one = (wchar_t)208;
  wchar_t two = (wchar_t)90;
  int one_i = (int)one;
  if(one == two)
  wprintf(L"U+%04X = '%lc' %d\n", 208, (wchar_t)208, 208);

*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>
#include <stdbool.h>

#define TABLE_SIZE 100

typedef struct Character {
  wchar_t letter;
  float frequency;
  // unsigned int mapping;
  // int length;
} Character;

typedef struct node {
  // Character data;
  unsigned int data;
  struct node* right;
  struct node* left;
} node;

/* newNode() allocates a new node with the given data and NULL left and right pointers. */
struct node* newNode(unsigned int data)
{
    // Allocate memory for new node
    struct node* node = (struct node*)malloc(sizeof(struct node));

    // Assign data to this node
    node->data = data;

    // Initialize left and right children as NULL
    node->left = NULL;
    node->right = NULL;
    return (node);
}

void read_string() {
  wchar_t input[] = L"@#$\n";
  for(int letter = 0; letter < wcslen(input); letter++){
    printf("%lc ", input[letter]);
  }
}

void printSingleChar(wchar_t letter, bool new_line) {
   (new_line) ? printf("%lc\n", letter) : printf("%lc ", letter);
}

wchar_t convertToCharacter(int ASCI) {
  return (wchar_t)ASCI;
}

wchar_t convertToASCI(wchar_t letter) {
  return (int)letter;
}

Character map_array[] = {
  {L'a', 16.0},
  {L'θ', 16.0},
  {L'+', 16.0},
};

int main(int argc, char** argv) {
  printf("hello world\n");
  setlocale(LC_ALL, "");

  size_t len = sizeof(map_array)/sizeof(map_array[0]);
  for(int i=0; i < len; i++){
    printSingleChar(map_array[i].letter, true);
  }



  return 0;
}

// --------- Code for reference ------------
// void conversions() {
//   wchar_t one = (wchar_t)208;
//   wchar_t two = (wchar_t)90;
//   wchar_t nicole = '@';
//   printf("%lc\n", nicole);
//   wchar_t input[] = L"@#$\n";
//   wprintf(input);
// }

// typedef struct Character {
//   char letter;
//   float frequency;
//   // unsigned int mapping;
//   // int length;
// } Character;
