#include <stdio.h>

/* betty style doc for function main goes there */
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/


void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

/* print any alphabet 10 times */
void print_alphabet(void)
{
	int n = 0;

	while (n < 10)
	{
	  int i;
	  for (i = 'a'; i <= 'z'; ++i)
		{
			putchar(i);
		}

		putchar('\n');
		++n;
	}
}
