#include <stdio.h>

void print_to_98(int n);

/**
* print_to_98 - Entry point
* @n: the input
* Description: 'This function is for checking out all integers'
* Return: nothing
*/

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
