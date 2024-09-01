#include <stdio.h>
#include <stdlib.h> // standard library for memory allocation and random number
#include <time.h>	// time library to seed random number
#include "random.h" // header file for randchar function declaration

int main()
{
	int a;

	/* seed the randomizer */
	srand((unsigned)time(NULL));

	printf("Today's random word: ");
	for (a = 0; a < 7; a++)	 // loop generate and print 7 random words
		putchar(randchar()); // call randchar
	putchar('\n');			 // print newline after the word

	return (0);
}
