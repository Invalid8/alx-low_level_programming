#include <stdio.h>

/**
 * print_triangle - this is a function for check out
 * @size: this is the input to work on
 * Decription: 'This function is to draw triangle'
 * Return: triangle
 */

void print_triangle(int size);

void print_triangle(int size)
{
	int i = 0, j, n = size - 1;

	if (size > 0)
	{
		for (; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < n)
					putchar(' ');
				else
					putchar('#');
			}
			n--;
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
