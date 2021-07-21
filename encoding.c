/*
  Authors: Rafay and Nicole

  Encoding - take string and turn into binary
  Decoding - take binary and turn into string

  compile: gcc encoding.c -o encoding
  run: ./encoding

  Notes:
  '+' means an empty node
  wchar_t one = (wchar_t)208;
  wchar_t two = (wchar_t)90;
  int one_i = (int)one;
  if(one == two)
  wprintf(L"U+%04X = '%lc' %d\n", 208, (wchar_t)208, 208);

  Things to tackle:
    1. Verify that we can encode and decode
    2. Simulate generation of string based on frequencies
    3. Build our trees
    4. Stitch all together

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
  char *binary;
  // unsigned int mapping;
  // int length;
} Character;

typedef struct node {
  // Character data;
  wchar_t data;
  struct node* right;
  struct node* left;
} node;

/* newNode() allocates a new node with the given data and NULL left and right pointers. */
struct node* newNode(wchar_t letter)
{
    // Allocate memory for new node
    struct node* node = (struct node*)malloc(sizeof(struct node));

    // Assign data to this node
    node->data = letter;

    // Initialize left and right children as NULL
    node->left = NULL;
    node->right = NULL;
    return (node);
}

void readString() {
  wchar_t input[] = L"@#$\n";
  for(int letter = 0; letter < wcslen(input); letter++){
    printf("%lc ", input[letter]);
  }
}

void readFromObj(Character map_array[], size_t len) {
  for(int i = 0; i < len; i++){
    printf("%lc ", map_array[i].letter);
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
  {L'a', 16.0, "00"},
  {L'θ', 15.0, "010"},
  {L'$', 14.0, "10"},
};


int main(int argc, char** argv) {
  printf("hello world\n");
  setlocale(LC_ALL, "");

  size_t map_len = sizeof(map_array)/sizeof(map_array[0]);

  // --------------  Basic Encoding Start --------------
  wchar_t input[] = L"aθ$a\n";
  char binary_string[100];
  for(int i=0; i < wcslen(input); i++){
    for(int j=0; j < map_len; j++){
      if(input[i] == map_array[j].letter){
        strcat(binary_string, map_array[j].binary);
      }
    }
  }
  printf("%s\n", binary_string);
  // --------------  Basic Encoding End --------------


  // --------------  Basic Tree Start --------------
  // wchar_t tmp =
  struct node* root = newNode(L'+');
  root->left = newNode(L'+');

  root->left->left = newNode(L'a');
  root->left->right = newNode(L'+');

  root->left->right->left = newNode(L'θ');

  root->right = newNode(L'+');
  root->right->left = newNode(L'$');

  // --------------  Basic Tree End --------------


  // --------------  Basic Decoding Start --------------

  wchar_t decoded_string[100] = L"";
  struct node* curr = root;
  size_t binary_string_len = strlen(binary_string);
  for(int i = 0; i < binary_string_len; i++){
    if(binary_string[i] == '0'){
      curr = curr->left;
    }else{
      curr = curr->right;
    }

    if(curr->left == NULL && curr->right == NULL){
      wcscat(decoded_string, &curr->data);
      curr = root;
    }
  }
  wprintf(decoded_string);
  printf("\n");

  // --------------  Basic Encoding End --------------



  // size_t len = sizeof(map_array)/sizeof(map_array[0]);
  // readFromObj(map_array, len);

  return 0;
}

// --------- Code for reference ------------

// for(int i=0; i < len; i++){
//   printSingleChar(map_array[i].letter, true);
// }

// size_t len = sizeof(map_array)/sizeof(map_array[0]);
// for(int i=0; i < len; i++){
//   printSingleChar(map_array[i].letter, true);
// }

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
