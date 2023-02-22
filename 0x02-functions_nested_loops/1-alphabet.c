#include <stdio.h>

void print_alphabet(void);

/**
* print_alphabet - Entry point
* Description: 'This function is for printing alphabets out'
* Return: abcdefghijklmnopqrstuvwxyz
*/

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);

	putchar('\n');
}
