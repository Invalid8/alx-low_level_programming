#include <stdio.h>

void print_alphabet_x10(void);

/**
* print_alphabet_x10 - Entry point
* Description: 'This function is for printing alphabets out'
* Return: abcdefghijklmnopqrstuvwxyz * 10
*/

void print_alphabet_x10(void)
{
	int n = 0;

	while (n < 10)
	{
		int i;

		for (i = 'a'; i <= 'z'; i++)
			putchar(i);

		putchar('\n');
		n++;
	}
}
