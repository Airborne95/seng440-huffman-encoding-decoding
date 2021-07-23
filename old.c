// lut[0] = {'a', '0x0', 3, 16.00 }; // Binary: 000
// lut[1] = {'A', '0x2', 3, 16.00 }; // Binary: 010
// lut[2] = {'b', '0x4', 3, 7.619 }; // Binary: 100
// lut[3] = {'B', '0x6', 3, 7.619 }; // Binary: 110

// lut[4] = {'c', '0x2', 4, 3.810 }; // Binary: 0010
// lut[5] = {'C', '0x6', 4, 3.810 }; // Binary: 0110
// lut[6] = {'d', '0xA', 4, 2.540 }; // Binary: 1010
// lut[7] = {'D', '0xE', 4, 2.540 }; // Binary: 1110

// lut[8] = {'e', '0x6', 5, 1.905 }; // Binary: 0 0110
// lut[9] = {'E', '0xE', 5, 1.905 }; // Binary: 0 1110
// lut[10] = {'f', '0x16', 5, 1.524 }; // Binary: 1 0110
// lut[11] = {'F', '0x1E', 5, 1.524 }; // Binary: 1 1110

// lut[12] = {'g', '0xE', 6, 1.270 };  // Binary: 00 1110
// lut[13] = {'G', '0x1E', 6, 1.270 }; // Binary: 01 1110
// lut[14] = {'h', '0x2E', 6, 1.088 }; // Binary: 10 1110
// lut[15] = {'H', '0x3E', 6, 1.088 }; // Binary: 11 1110

// lut[16] = {'i', '0x1E', 7, 0.952 }; // Binary: 001 1110
// lut[17] = {'I', '0x3E', 7, 0.952 }; // Binary: 011 1110
// lut[18] = {'j', '0x5E', 7, 0.847 }; // Binary: 101 1110
// lut[19] = {'J', '0x7E', 7, 0.847 }; // Binary: 111 1110

// lut[20] = {'k', '0x3E', 8, 0.762 }; // Binary: 0011 1110
// lut[21] = {'K', '0x7E', 8, 0.762 }; // Binary: 0111 1110
// lut[22] = {'l', '0xBE', 8, 0.693 }; // Binary: 1011 1110
// lut[23] = {'L', '0xFE', 8, 0.693 }; // Binary: 1111 1110

// lut[24] = {'m', '0x7E', 9, 0.635 }; // Binary: 0 0111 1110
// lut[25] = {'M', '0xFE', 9, 0.635 }; // Binary: 0 1111 1110
// lut[26] = {'n', '0x17E', 9, 0.586 }; // Binary: 1 0111 1110
// lut[27] = {'N', '0x1FE', 9, 0.586 }; // Binary: 1 1111 1110

// lut[28] = {'o', '0xFE', 10, 0.544 }; // Binary: 00 1111 1110
// lut[29] = {'O', '0x1FE', 10, 0.544 }; // Binary: 01 1111 1110
// lut[30] = {'p', '0x2FE', 10, 0.508 }; // Binary: 10 1111 1110
// lut[31] = {'P', '0x3FE', 10, 0.508 }; // Binary: 11 1111 1110

// lut[32] = {'q', '0x1FE', 11, 0.476 }; // Binary: 001 1111 1110
// lut[33] = {'Q', '0x3FE', 11, 0.476 }; // Binary: 011 1111 1110
// lut[34] = {'r', '0x5FE', 11, 0.448 }; // Binary: 101 1111 1110
// lut[35] = {'R', '0x7FE', 11, 0.448 }; // Binary: 111 1111 1110

// // add hex
// lut[36] = {'s', '0x3FE', 12, 0.423 }; // Binary: 0011 1111 1110
// lut[37] = {'S', '0x7FE', 12, 0.423 }; // Binary: 0111 1111 1110
// lut[38] = {'t', '0xBFE', 12, 0.401 }; // Binary: 1011 1111 1110
// lut[39] = {'T', '0xFFE', 12, 0.401 }; // Binary: 1111 1111 1110

// lut[40] = {'u', '0x7FE', 13, 0.381 }; // Binary: 0 0111 1111 1110
// lut[41] = {'U', '0xFFE', 13, 0.381 }; // Binary: 0 1111 1111 1110
// lut[42] = {'v', '0x17FE', 13, 0.363 }; // Binary: 1 0111 1111 1110
// lut[43] = {'V', '0x1FFE', 13, 0.363 }; // Binary: 1 1111 1111 1110

// lut[44] = {'w', '0xFFE', 14, 0.346 }; // Binary: 00 1111 1111 1110
// lut[45] = {'W', '0x1FFE', 14, 0.346 }; // Binary: 01 1111 1111 1110
// lut[46] = {'x', '0x2FFE', 14, 0.331 }; // Binary: 10 1111 1111 1110
// lut[47] = {'X', '0x3FFE', 14, 0.331 }; // Binary: 11 1111 1111 1110

// lut[48] = {'y', '0x1FFE', 15, 0.317 }; // Binary: 001 1111 1111 1110
// lut[49] = {'Y', '0x3FFE', 15, 0.317 }; // Binary: 011 1111 1111 1110
// lut[50] = {'z', '0x5FFE', 15, 0.305 }; // Binary: 101 1111 1111 1110
// lut[51] = {'Z', '0x7FFE', 15, 0.305 }; // Binary: 111 1111 1111 1110

// lut[52] = {'0', '0x3FFE', 16, 0.293 }; // Binary: 0011 1111 1111 1110
// lut[53] = {'1', '0x7FFE', 16, 0.293 }; // Binary: 0111 1111 1111 1110
// lut[54] = {'2', '0xBFFE', 16, 0.293 }; // Binary: 1011 1111 1111 1110
// lut[55] = {'3', '0xFFFE', 16, 0.293 }; // Binary: 1111 1111 1111 1110

// lut[56] = {'4', '0x7FFE', 17, 0.282 }; // Binary: 0 0111 1111 1111 1110
// lut[57] = {'5', '0xFFFE', 17, 0.282 }; // Binary: 0 1111 1111 1111 1110
// lut[58] = {'6', '0x17FFE', 17, 0.263 }; // Binary: 1 0111 1111 1111 1110
// lut[59] = {'7', '0x1FFFE', 17, 0.263 }; // Binary: 1 1111 1111 1111 1110

// lut[60] = {'8', '0xFFFE', 18, 0.254 }; // Binary: 00 1111 1111 1111 1110
// lut[61] = {'9', '0x1FFFE', 18, 0.254 }; // Binary: 01 1111 1111 1111 1110
// lut[62] = {'!', '0x27FFE', 18, 0.246 }; // Binary: 10 1111 1111 1111 1110
// lut[63] = {'@', '0x3FFFE', 18, 0.246 }; // Binary: 11 1111 1111 1111 1110

// lut[64] = {'#', '0x1FFFE', 19, 0.238 }; // Binary: 001 1111 1111 1111 1110
// lut[65] = {'$', '0x3FFFE', 19, 0.238 }; // Binary: 011 1111 1111 1111 1110
// lut[66] = {'%', '0x5FFFE', 19, 0.231 }; // Binary: 101 1111 1111 1111 1110
// lut[67] = {'^', '0x7FFFE', 19, 0.231 }; // Binary: 111 1111 1111 1111 1110

// lut[68] = {'&', '0x3FFFE', 20, 0.224 }; // Binary: 0011 1111 1111 1111 1110
// lut[69] = {'*', '0x7FFFE', 20, 0.224 }; // Binary: 0111 1111 1111 1111 1110
// lut[70] = {'(', '0xBFFFE', 20, 0.218 }; // Binary: 1011 1111 1111 1111 1110
// lut[71] = {')', '0xFFFFE', 20, 0.218 }; // Binary: 1111 1111 1111 1111 1110

// lut[72] = {'-', '0x7FFFE', 21, 0.212 }; // Binary: 0 0111 1111 1111 1111 1110
// lut[73] = {'[', '0xFFFFE', 21, 0.212 }; // Binary: 0 1111 1111 1111 1111 1110
// lut[74] = {']', '0x17FFFE', 21, 0.206 }; // Binary: 1 0111 1111 1111 1111 1110
// lut[75] = {'{', '0x1FFFFE', 21, 0.206 }; // Binary: 1 1111 1111 1111 1111 1110

// lut[76] = {'}', '0xFFFFE', 22, 0.201 }; // Binary: 00 1111 1111 1111 1111 1110
// lut[77] = {'|', '0x1FFFFE', 22, 0.201 }; // Binary: 01 1111 1111 1111 1111 1110
// lut[78] = {',', '0x2FFFFE', 22, 0.195 }; // Binary: 10 1111 1111 1111 1111 1110
// lut[79] = {'.', '0x3FFFFE', 22, 0.195 }; // Binary: 11 1111 1111 1111 1111 1110

// lut[80] = {'<', '0x1FFFFE', 23, 0.190 }; // Binary: 001 1111 1111 1111 1111 1110
// lut[81] = {'>', '0x3FFFFE', 23, 0.190 }; // Binary: 011 1111 1111 1111 1111 1110
// lut[82] = {'/', '0x5FFFFE', 23, 0.186 }; // Binary: 101 1111 1111 1111 1111 1110
// lut[83] = {'?', '0x7FFFFE', 23, 0.186 }; // Binary: 111 1111 1111 1111 1111 1110

// lut[84] = {'α', '0x3FFFFE', 24, 0.181 }; // Binary: 0011 1111 1111 1111 1111 1110
// lut[85] = {'β', '0x7FFFFE', 24, 0.181 }; // Binary: 0111 1111 1111 1111 1111 1110
// lut[86] = {'ψ', '0xBFFFFE', 24, 0.177 }; // Binary: 1011 1111 1111 1111 1111 1110
// lut[87] = {'δ', '0xFFFFFE', 24, 0.177 }; // Binary: 1111 1111 1111 1111 1111 1110

// lut[88] = {'ε', '0x7FFFFE', 25, 0.173 }; // Binary: 0 0111 1111 1111 1111 1111 1110
// lut[89] = {'φ', '0xFFFFFE', 25, 0.173 }; // Binary: 0 1111 1111 1111 1111 1111 1110
// lut[90] = {'γ', '0x17FFFFE', 25, 0.169 }; // Binary: 1 0111 1111 1111 1111 1111 1110
// lut[91] = {'η', '0x1FFFFFE', 25, 0.169 }; // Binary: 1 1111 1111 1111 1111 1111 1110

// lut[92] = {'ξ', '0xFFFFFE', 26, 0.166 }; // Binary: 00 1111 1111 1111 1111 1111 1110
// lut[93] = {'λ', '0x1FFFFFE', 26, 0.166 }; // Binary: 01 1111 1111 1111 1111 1111 1110
// lut[94] = {'μ', '0x2FFFFFE', 26, 0.162 }; // Binary: 10 1111 1111 1111 1111 1111 1110
// lut[95] = {'π', '0x3FFFFFE', 26, 0.162 }; // Binary: 11 1111 1111 1111 1111 1111 1110

// lut[96] = {'ρ', '0x1FFFFFE', 27, 0.159 }; // Binary: 001 1111 1111 1111 1111 1111 1110
// lut[97] = {'σ', '0x3FFFFFE', 27, 0.159 }; // Binary: 001 1111 1111 1111 1111 1111 1110
// lut[98] = {'θ', '0x5FFFFFE', 27, 0.028 }; // Binary: 101 1111 1111 1111 1111 1111 1110
// lut[99] = {'ω', '0x5FFFFFE', 27, 0.028 }; // Binary: 111 1111 1111 1111 1111 1111 1110

// void readString() {
//   wchar_t input[] = L"@#$\n";
//   for(int letter = 0; letter < wcslen(input); letter++){
//     printf("%lc ", input[letter]);
//   }
// }

// void readFromObj(Character map_array[], size_t len) {
//   for(int i = 0; i < len; i++){
//     printf("%lc ", map_array[i].letter);
//   }
// }

// void printSingleChar(wchar_t letter, bool new_line) {
//    (new_line) ? printf("%lc\n", letter) : printf("%lc ", letter);
// }

// wchar_t convertToCharacter(int ASCI) {
//   return (wchar_t)ASCI;
// }

// wchar_t convertToASCI(wchar_t letter) {
//   return (int)letter;
// }

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