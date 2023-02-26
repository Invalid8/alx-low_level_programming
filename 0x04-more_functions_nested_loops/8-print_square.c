#include <stdio.h>

/**
 * print_square - this is a function for check out
 * @size: this is the input to work on
 * Decription: 'This function is to draw square'
 * Return: square
 */

void print_square(int size);

void print_square(int size)
{
	char s = '#';

	int n = 0;

	while (size > n)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			putchar(s);
		}
		putchar('\n');
		n++;
	}
}
