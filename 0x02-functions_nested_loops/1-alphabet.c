#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
/* this function is to print alphabet */
void print_alphabet(void);

void print_alphabet(void)
{
  int i;
  
	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	putchar('\n');
}
