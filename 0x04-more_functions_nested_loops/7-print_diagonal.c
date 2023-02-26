#include <stdio.h>

/**
 * print_diadonal - this is a function for check out
 * @n: this is the input to work on
 * Decription: 'This function is to draw daigonal'
 * Return: daigonal
 */

void print_diagonal(int n);

void print_diagonal(int n)
{
	int i = 0, j;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar('\\');
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
