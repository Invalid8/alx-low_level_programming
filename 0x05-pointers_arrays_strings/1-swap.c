#include <stdio.h>

/**
 * swap_int - this is a function for check out
 * @a: this is the input to work on
 * @b: this is also an int input
 * Decription: 'This function is to swap locations'
 * Return: 0
 */

void swap_int(int *a, int *b);

void swap_int(int *a, int *b)
{
	int *x;

	*x = *b;
	*b = *a;
	*a = *x;
}
