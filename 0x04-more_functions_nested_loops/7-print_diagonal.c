#include <stdio.h>

/**
 * print_diagonal - this is a function for check out
 * @n: this is the input to work on
 * Decription: 'This function is to draw daigonal'
 * Return: daigonal
 */

void print_diagonal(int n);

void print_diagonal(int n)
{
	char s = '\\';

	int sn = 0;

	while (n > 0)
	{
		int i;

		for (i = 0; i < sn; i++)
		{
			putchar(' ');
		}

		putchar(s);
		putchar('$');
		putchar('\n');

		n--;
		sn++;
	}
}
