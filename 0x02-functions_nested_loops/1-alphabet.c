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


/* this function is to print alphabet */
void print_alphabet(void)
{
	for (int i = 'a'; i <= 'z'; ++i)
	{
		putchar(i);
	}

	putchar('\n');
}
