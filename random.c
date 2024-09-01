// Phirun Chhay Lab(Git)
#include "random.h" // header file for function declaration
#include <stdlib.h> // library for memory allocation

// Function to generate A to Z using an array
char randchar()
{
    // array from A to Z
    char arry[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    return arry[rand() % 26]; // generate random number between 0 and 25
}