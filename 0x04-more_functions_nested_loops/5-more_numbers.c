#include <stdio.h>

/**
 * more_numbers - this is a function for check out
 * Decription: 'This function is to print more numbers'
 * Return: numbers
 */

void more_numbers(void);

void more_numbers(void)
{
	int i, j = 0;

	for (; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				putchar(i / 10 + '0');

			putchar(i % 10 + '0');
		}
		putchar('\n');
	}
}
