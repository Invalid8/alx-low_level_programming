#include <stdio.h>

/**
 * print_line - this is a function for check out
 * @n: this is the input to work on
 * Decription: 'This function is to draw line'
 * Return: line
 */

void print_line(int n);

void print_line(int n)
{
	char s = '_';

	while (n > 0)
	{
		putchar(s);
		n--;
	}
	putchar('\n');
}
