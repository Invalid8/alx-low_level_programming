#include <stdio.h>

void times_table(void);

/**
* times_table - Entry point
* Description: 'This function is for checking timestable'
* Return: 1 if true or 0 if false
*/

void times_table(void)
{
	int i, j, n;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			n = i * j;

			if ((n / 10) == 0)
			{
				if (j != 0)
					putchar(' ');
				putchar(n + '0');

				if (j == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
			else
			{
				putchar((n / 10) + '0');
				putchar((n % 10) + '0');
				if (j == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
