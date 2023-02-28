#include <stdio.h>

/**
 * print_array - this is a function for check out
 * @a: this is the array
 * @n: the lenght of array
 * Decription: 'This function is to print array elements
 * Return: 0
 */

void print_array(int *a, int n);

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	putchar('\n');
}
