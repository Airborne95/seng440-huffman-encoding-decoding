/*
  Authors: Rafay and Nicole

  compile: arm-linux-gcc -static -o original_decoding.exe original_decoding.c
  compile: gcc original_decoding.c -o original_decoding
  run: ./original_decoding
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

  int i;
  for(i = 0; i<wcslen(input1); i++){
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

int main(int argc, char** argv) {
  setlocale(LC_ALL, "");

  // Build Huffman Tree according to predetermined frequencies
  struct node* root = buildTree();

  char* binary_string = "00010110011010110000000011111100000000000111110011111100111110101101111111111111110001111111110000111101001111010111111001010010110110011100001000001111111111111111111110111110100101010000010110000111111111101111111001000111100110001111111111111111111111010011110000100010100010101110110001001000110101111001111111111111111111111111010111100000001001010001011111111111111111100010101000010001001111100101101011011000110111001000110111001010101111101000100000111111010001110001010010011111111111111110101111111111111011100000110100001100110010";

  wchar_t decoded_string[100] = L"";
  struct node* curr = root;
  size_t binary_string_len = strlen(binary_string);
  int i;
  for(i = 0; i < binary_string_len; i++){
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

  return 0;
}
