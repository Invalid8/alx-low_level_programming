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
	char s = '#';

	int n, sn1;

	n = 0;
	sn1 = size - 1;

	while (size > n)
	{
		int i;

		for (i = 0; i < sn1; i++)
		{
			putchar(' ');
		}

		for (i = size - sn1; i > 0; i--)
		{
			putchar(s);
		}

		putchar('\n');

		sn1--;
		n++;
	}
}
