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
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				putchar('#');
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
