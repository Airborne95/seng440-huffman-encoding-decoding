/*
  Authors: Rafay and Nicole

  Encoding - take string and turn into binary
  Decoding - take binary and turn into string

  compile: gcc optimized.c -o optimized
  run: ./optimized

  Notes:
  '+' means an empty node
  wchar_t one = (wchar_t)208;
  wchar_t two = (wchar_t)90;
  int one_i = (int)one;
  if(one == two)
  wprintf(L"U+%04X = '%lc' %d\n", 208, (wchar_t)208, 208);

  Deliverable Checklist:
  1. Create encoding and decoding files (Design and simulation) 10%
  2. Final Report 20%
    - how we simulated generate of string based on frequencies in Excel
    - paper analysis of two slot machine
  3. Presentation 15%
    - slides
    - specs and ARM platform
    - optimization
    - transition rate
  Teamwork <3 10%
  Q&A 15%


  ARM commands:

  ssh rafaych@seng440.ece.uvic.ca

  Local to Remote:
  scp encoding.c rafaych@seng440.ece.uvic.ca:/home/rafaych/Documents/seng440
  scp decoding.c rafaych@seng440.ece.uvic.ca:/home/rafaych/Documents/seng440

  Remote to Local:
  scp rafaych@seng440.ece.uvic.ca:/home/rafaych/Documents/seng440/encoding.s /Users/dev-rafay/Dev/seng440
  scp rafaych@seng440.ece.uvic.ca:/home/rafaych/Documents/seng440/decoding.s /Users/dev-rafay/Dev/seng440

  arm-linux-gcc -static -o encoding.exe encoding.c
  arm-linux-gcc -static -o decoding.exe decoding.c

  lftp user2@arm
  q6coHjd7P 		//password
  put encoding.exe
  put decoding.exe
  bye

  telnet arm
  user2         //login
  q6coHjd7P 		/password
  chmod +x encoding.exe
  chmod +x decoding.exe
  ./encoding.exe
  ./decoding.exe
  exit
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

typedef struct node {
  wchar_t data;
  struct node* right;
  struct node* left;
} node;

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

// Builds a Huffman Binary Tree to traverse for decoding
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

  int i;
  register wchar_t char1 = input1[0];
  register wchar_t char2 = input2[0];
  register wchar_t char3 = input3[0];
  register wchar_t char4 = input4[0];

  register int len = wcslen(input1);
  for(i^=i; i<len; i+=2){
    curr1->left = newNode(char1);
    curr1->right = newNode(L'+');
    curr1 = curr1->right;

    curr2->left = newNode(char2);
    curr2->right = newNode(L'+');
    curr2 = curr2->right;

    curr3->left = newNode(char3);
    curr3->right = newNode(L'+');
    curr3 = curr3->right;


    curr4->left = newNode(char4);
    curr4->right = newNode(L'+');
    curr4 = curr4->right;

    // Loop unrolling
    char1 = input1[i+1];
    char2 = input2[i+1];
    char3 = input3[i+1];
    char4 = input4[i+1];

    curr1->left = newNode(char1);
    curr1->right = newNode(L'+');
    curr1 = curr1->right;

    curr2->left = newNode(char2);
    curr2->right = newNode(L'+');
    curr2 = curr2->right;

    curr3->left = newNode(char3);
    curr3->right = newNode(L'+');
    curr3 = curr3->right;

    curr4->left = newNode(char4);
    curr4->right = newNode(L'+');
    curr4 = curr4->right;

    // Software pipelining
    char1 = input1[i+2];
    char2 = input2[i+2];
    char3 = input3[i+2];
    char4 = input4[i+2];
  }
  return (root);
}

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
  {L'α', "001111111111111111111110"},
  {L'β', "011111111111111111111110"},
  {L'ψ', "101111111111111111111110"},
  {L'δ', "111111111111111111111110"},
  {L'ε', "0011111111111111111111110"},
  {L'φ', "0111111111111111111111110"},
  {L'γ', "1011111111111111111111110"},
  {L'η', "1111111111111111111111110"},
  {L'ξ', "00111111111111111111111110"},
  {L'λ', "01111111111111111111111110"},
  {L'μ', "10111111111111111111111110"},
  {L'π', "11111111111111111111111110"},
  {L'ρ', "001111111111111111111111110"},
  {L'σ', "011111111111111111111111110"},
  {L'θ', "101111111111111111111111110"},
  {L'ω', "111111111111111111111111110"},
};

int main(int argc, char** argv) {
  setlocale(LC_ALL, "");

  // Build Huffman Tree according to predetermined frequencies
  struct node* root = buildTree();

  // --------------  Basic Encoding Start --------------
  wchar_t input[] = L"afCfaaKaaaIKIf3saFbFnAbfBEaba.HbdbafaRLAiCεbFabAbAhBcAejσjaabdc^cdabAIABfBeDAeDAdHbAaKbEcbb72DaCbeCA\n";

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
  // printf("%s\n", binary_string);
  // --------------  Basic Encoding End --------------

  // --------------  Basic Decoding Start --------------
  wchar_t decoded_string[100] = L"";
  struct node* curr = root;

  // Local Variables
  register size_t binary_string_len = strlen(binary_string);
  register char local_binary_decode;

  // Software Pipeling
  local_binary_decode = (char)binary_string[0];

  for(i^=i; i < binary_string_len; i+=2){
    if(local_binary_decode == '0'){
      curr = curr->left;
    }else{
      curr = curr->right;
    }

    if(curr->left == NULL && curr->right == NULL){
      wcscat(decoded_string, &curr->data);
      curr = root;
    }
    local_binary_decode = (char)binary_string[i+1];

    // Loop Unrolling
    if(local_binary_decode == '0'){
      curr = curr->left;
    }else{
      curr = curr->right;
    }

    if(curr->left == NULL && curr->right == NULL){
      wcscat(decoded_string, &curr->data);
      curr = root;
    }

    // Software Pipelining
    local_binary_decode = (char)binary_string[i+2];
  }
  wprintf(decoded_string);
  printf("\n");
  // --------------  Basic Encoding End --------------

  return 0;
}
