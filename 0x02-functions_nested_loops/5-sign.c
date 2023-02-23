#include <stdio.h>

int print_sign(int n);

/**
* print_sign - Entry point
* @n: the input
* Description: 'This function print if n is
* greater in sign representation'
* Return: 1 if true or 0 if false
*/

int print_sign(int n)
{
	char s;
	int r;

	if (n < 0)
	{
		s = '-';
		r = -1;
	}
	else if (n == 0)
	{
		s = '0';
		r = 0;
	}
	else
	{
		s = '+';
		r = 1;
	}

	putchar(s);
	return (n);
}
