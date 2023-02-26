#include <stdio.h>

/**
 * print_numbers - this is a function for check out
 * Decription: 'This function is to print numbers'
 * Return: numbers
 */

void print_numbers(void);

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	putchar('\n');
}
