#include <stdio.h>

/**
 * more_numbers - this is a function for check out
 * Decription: 'This function is to print more numbers'
 * Return: numbers
 */

void more_numbers(void);

void more_numbers(void)
{
	int H, n;

	while (n < 10)
	{
		for (H = 0; H < 15; H++)
		{
			if (H > 9)
			{
				putchar((H / 10) + '0');
			}
			putchar((H % 10) + '0');
		}
		putchar('\n');
		n++;
	}
}
