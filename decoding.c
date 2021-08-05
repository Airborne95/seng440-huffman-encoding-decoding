/*
  Authors: Rafay and Nicole

  Encoding - take string and turn into binary
  Decoding - take binary and turn into string

  compile: gcc decoding.c -o decoding
  run: ./decoding

  Notes:
  '+' means an empty node
  wchar_t one = (wchar_t)208;
  wchar_t two = (wchar_t)90;
  int one_i = (int)one;
  if(one == two)
  wprintf(L"U+%04X = '%lc' %d\n", 208, (wchar_t)208, 208);

  ARM commands:

  scp encoding.c optimized.c rafaych@seng440.ece.uvic.ca:/home/rafaych/Documents/seng440

  arm-linux-gcc -static -o optimized.exe optimized.c

  lftp user2@arm
  q6coHjd7P 		//password
  put optimized.exe
  bye

  telnet arm
  user2         //login
  q6coHjd7P 		/password
  chmod +x optimized.exe
  ./optimized.exe
  exit
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>

#define ALPHABET_SIZE 100

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

  // Local Variables
  register int i;
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

int main(int argc, char** argv) {
  setlocale(LC_ALL, "");

  // Build Huffman Tree according to predetermined frequencies
  struct node* root = buildTree();

  // Binary encoded string to be decoded
  char* binary_string = "00010110011010110000000011111100000000000111110011111100111110101101111111111111110001111111110000111101001111010111111001010010110110011100001000001111111111111111111110111110100101010000010110000111111111101111111001000111100110001111111111111111111111010011110000100010100010101110110001001000110101111001111111111111111111111111010111100000001001010001011111111111111111100010101000010001001111100101101011011000110111001000110111001010101111101000100000111111010001110001010010011111111111111110101111111111111011100000110100001100110010";

  wchar_t decoded_string[100] = L"";
  struct node* curr = root;

  // Local Variables
  register int i;
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

  return 0;
}