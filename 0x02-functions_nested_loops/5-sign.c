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
	int value;

	if (n > 0)
	{
		value = 1;
		putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		putchar('0');
	}
	else
	{
		value = -1;
		putchar('-');
	}

	return (value);
}
