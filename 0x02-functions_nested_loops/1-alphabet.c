#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

void print_alphabet(void);

/* This function is for printing alphabets out */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);

	putchar('\n');
}
