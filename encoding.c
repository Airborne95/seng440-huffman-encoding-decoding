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
    1. Verify that we can encode and decode (DONE)
    2. Simulate generation of string based on frequencies
    3. Build our tree (Done)
    4. Stitch all together

*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>
#include <stdbool.h>

#define ALPHABET_SIZE 100

typedef struct Character {
  wchar_t letter;
  float frequency;
  char *binary;
} Character;

typedef struct node {
  wchar_t data;
  struct node* right;
  struct node* left;
} node;

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

/* newNode() allocates a new node with the given data and NULL left and right pointers. */
struct node* newNode(wchar_t letter) {
  // Allocate memory for new node
  struct node* node = (struct node*)malloc(sizeof(struct node));

  // Assign data to this node
  node->data = letter;

  // Initialize left and right children as NULL
  node->left = NULL;
  node->right = NULL;
  return (node);
}

struct node* buildTree() {
  struct node* root = newNode(L'+');
  root->left = newNode(L'+');
  root->right = newNode(L'+');
  root->left->left = newNode(L'+');
  root->left->right = newNode(L'+');
  root->right->left = newNode(L'+');
  root->right->right = newNode(L'+');

  wchar_t input1[] = L"acegikmoqsuwy048#&-}<αεξρ\n";
  wchar_t input2[] = L"ACEGIKMOQSUWY159$*[|>βφλσ\n";
  wchar_t input3[] = L"bdfhjlnprtvxz26!~(],/ψγμθ\n";
  wchar_t input4[] = L"BDFHJLNPRTVXZ37@^){.?δηπω\n";

  struct node* branch1 = root->left->left;
  struct node* branch2 = root->left->right;
  struct node* branch3 = root->right->left;
  struct node* branch4 = root->right->right;

  struct node* curr1 = branch1;
  struct node* curr2 = branch2;
  struct node* curr3 = branch3;
  struct node* curr4 = branch4;
  
  for(int i = 0; i<wcslen(input1); i++){
    curr1->left = newNode(input1[i]);
    curr1->right = newNode(L'+');
    curr1 = curr1->right;

    curr2->left = newNode(input2[i]);
    curr2->right = newNode(L'+');
    curr2 = curr2->right;

    curr3->left = newNode(input3[i]);
    curr3->right = newNode(L'+');
    curr3 = curr3->right;

    curr4->left = newNode(input4[i]);
    curr4->right = newNode(L'+');
    curr4 = curr4->right;
  }
  return (root);
}

Character map_array[ALPHABET_SIZE] = {
  {L'a', 16.0, "000"},
  {L'A', 16.0, "010"},
  {L'b', 16.0, "100"},
  {L'B', 16.0, "110"},
  {L'c', 16.0, "0010"},
  {L'C', 16.0, "0110"},
  {L'd', 16.0, "1010"},
  {L'D', 16.0, "1110"},
  {L'e', 16.0, "00110"},
  {L'E', 16.0, "01110"},
  {L'f', 16.0, "10110"},
  {L'F', 16.0, "11110"},
  {L'g', 16.0, "001110"},
  {L'G', 16.0, "011110"},
  {L'h', 16.0, "101110"},
  {L'H', 16.0, "111110"},
  {L'i', 16.0, "0011110"},
  {L'I', 16.0, "0111110"},
  {L'j', 16.0, "1011110"},
  {L'J', 16.0, "1111110"},
  {L'k', 16.0, "00111110"},
  {L'K', 16.0, "01111110"},
  {L'l', 16.0, "10111110"},
  {L'L', 16.0, "11111110"},
  {L'm', 16.0, "001111110"},
  {L'M', 16.0, "011111110"},
  {L'n', 16.0, "101111110"},
  {L'N', 16.0, "111111110"},
  {L'o', 16.0, "0011111110"},
  {L'O', 16.0, "0111111110"},
  {L'p', 16.0, "1011111110"},
  {L'P', 16.0, "1111111110"},
  {L'q', 16.0, "00111111110"},
  {L'Q', 16.0, "01111111110"},
  {L'r', 16.0, "10111111110"},
  {L'R', 16.0, "11111111110"},
  {L's', 16.0, "001111111110"},
  {L'S', 16.0, "011111111110"},
  {L't', 16.0, "101111111110"},
  {L'T', 16.0, "111111111110"},
  {L'u', 16.0, "0011111111110"},
  {L'U', 16.0, "0111111111110"},
  {L'v', 16.0, "1011111111110"},
  {L'V', 16.0, "1111111111110"},
  {L'w', 16.0, "00111111111110"},
  {L'W', 16.0, "01111111111110"},
  {L'x', 16.0, "10111111111110"},
  {L'X', 16.0, "11111111111110"},
  {L'y', 16.0, "001111111111110"},
  {L'Y', 16.0, "011111111111110"},
  {L'z', 16.0, "101111111111110"},
  {L'Z', 16.0, "111111111111110"},
  {L'0', 16.0, "0011111111111110"},
  {L'1', 16.0, "0111111111111110"},
  {L'2', 16.0, "1011111111111110"},
  {L'3', 16.0, "1111111111111110"},
  {L'4', 16.0, "00111111111111110"},
  {L'5', 16.0, "01111111111111110"},
  {L'6', 16.0, "10111111111111110"},
  {L'7', 16.0, "11111111111111110"},
  {L'8', 16.0, "001111111111111110"},
  {L'9', 16.0, "011111111111111110"},
  {L'!', 16.0, "101111111111111110"},
  {L'@', 16.0, "111111111111111110"},
  {L'#', 16.0, "0011111111111111110"},
  {L'$', 16.0, "0111111111111111110"},
  {L'~', 16.0, "1011111111111111110"},
  {L'^', 16.0, "1111111111111111110"},
  {L'&', 16.0, "00111111111111111110"},
  {L'*', 16.0, "01111111111111111110"},
  {L'(', 16.0, "10111111111111111110"},
  {L')', 16.0, "11111111111111111110"},
  {L'-', 16.0, "001111111111111111110"},
  {L'[', 16.0, "011111111111111111110"},
  {L']', 16.0, "101111111111111111110"},
  {L'{', 16.0, "111111111111111111110"},
  {L'}', 16.0, "0011111111111111111110"},
  {L'|', 16.0, "0111111111111111111110"},
  {L',', 16.0, "1011111111111111111110"},
  {L'.', 16.0, "1111111111111111111110"},
  {L'<', 16.0, "00111111111111111111110"},
  {L'>', 16.0, "01111111111111111111110"},
  {L'/', 16.0, "10111111111111111111110"},
  {L'?', 16.0, "11111111111111111111110"},
  {L'α', 16.0, "001111111111111111111110"},
  {L'β', 16.0, "011111111111111111111110"},
  {L'ψ', 16.0, "101111111111111111111110"},
  {L'δ', 16.0, "111111111111111111111110"},
  {L'ε', 16.0, "0011111111111111111111110"},
  {L'φ', 16.0, "0111111111111111111111110"},
  {L'γ', 16.0, "1011111111111111111111110"},
  {L'η', 16.0, "1111111111111111111111110"},
  {L'ξ', 16.0, "00111111111111111111111110"},
  {L'λ', 16.0, "01111111111111111111111110"},
  {L'μ', 16.0, "10111111111111111111111110"},
  {L'π', 16.0, "11111111111111111111111110"},
  {L'ρ', 16.0, "001111111111111111111111110"},
  {L'σ', 16.0, "011111111111111111111111110"},
  {L'θ', 15.0, "101111111111111111111111110"},
  {L'ω', 16.0, "111111111111111111111111110"},
};

int main(int argc, char** argv) {
  setlocale(LC_ALL, "");

  // Build Huffman Tree according to predetermined frequencies
  struct node* root = buildTree();

  // --------------  Basic Encoding Start --------------
  size_t map_len = sizeof(map_array)/sizeof(map_array[0]);
  wchar_t input[] = L"aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ0123456789!@#$~^&*()-[]{}|,.<>/?αβψδεφγηξλμπρσθω\n";
  char binary_string[5000] = "";
  for(int i=0; i < wcslen(input); i++){
    for(int j=0; j < map_len; j++){
      if(input[i] == map_array[j].letter){
        strcat(binary_string, map_array[j].binary);
      }
    }
  }
  printf("%s\n", binary_string);
  // --------------  Basic Encoding End --------------

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
