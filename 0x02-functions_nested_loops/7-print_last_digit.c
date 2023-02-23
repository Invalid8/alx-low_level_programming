#include <stdio.h>

int print_last_digit(int c);

/**
* print_last_digit - Entry point
* @c: the input
* Description: 'This function is for checking out alphabetic input'
* Return: 1 if true or 0 if false
*/

int print_last_digit(int r)
{
	int n;

	if (r < 0)
		n = -1 * (r % 10);
	else
		n = r * 10;

	putchar((n % 10) + '0');
	return (n % 10);
}
