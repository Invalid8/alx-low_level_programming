#include <stdio.h>

void print_times_table(int n);

/**
* print_times_table - Entry point
* @n: the input
* Description: 'This function is for checking out timestable'
* Return: nothing
*/

void putformat(int n);

void print_times_table(int n)
{
	int i, j;

	if (n > 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			putchar('0');
			for (j = 1; j <= n; j++)
				putformat(i * j);
			putchar('\n');
		}
	}
}

/**
 * putformat - formatted characters to output
 * @n: number to format
 * Return: nothing
 */
void putformat(int n)
{
	if (n <= 9)
	{
		putchar(',');
		putchar(' ');
		putchar(' ');
		putchar(' ');
		putchar(n + '0');
	}
	else if (n > 9 && n <= 99)
	{
		putchar(',');
		putchar(' ');
		putchar(' ');
		putchar(n / 10 + '0');
		putchar(n % 10 + '0');
	}
	else
	{
		putchar(',');
		putchar(' ');
		putchar(n / 100 + '0');
		putchar(n / 10 % 10 + '0');
		putchar(n % 10 + '0');
	}
}
