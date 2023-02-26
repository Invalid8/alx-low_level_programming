#include <stdio.h>

/**
 * print_most_numbers - this is a function for check out
 * Decription: 'This function is to print numbers 10 times'
 * Return: numbers ten times
 */

void print_most_numbers(void);

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
		{
			continue;
		}
		putchar(i);
	}

	putchar('\n');
}
