#include <stdio.h>
#include <stdlib.h> // library for memory allocation
#include <time.h>   // library to seed random number with current time

// Function to generate A to Z using an array
char randchar()
{
    char arry[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    return arry[rand() % 26]; // generate random number between 0 and 25
}

// Function to generate a random string and store in provided buffer
void rand_string(char *s, size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        s[i] = randchar(); // call ranchar()
    }
    s[size] = '\0'; // null-terminate the string
}

// Function to allocate memory for random string and generate it
char *rand_string_alloc(size_t size)
{
    // allocate memory for string
    char *s = malloc(size + 1);
    if (s)
    { // if memory allocation was successful

        rand_string(s, size); // generate the randdom string and store in allocate memory
    }
    return s;
}

// Main function
int main()
{
    srand(time(NULL)); // seed random number generator with current time

    char *random_letter = rand_string_alloc(7); // generate random 7 letter
    if (random_letter)
    {
        printf("Random 7 letter are %s\n", random_letter);
        free(random_letter); // free the allocated memory, avoid memory leaks
    }

    return 0;
}