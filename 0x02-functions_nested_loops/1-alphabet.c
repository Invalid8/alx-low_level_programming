#include <stdio.h>
#include "main.h"

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
  int i;
  
	for (i = 'a'; i <= 'z'; ++i)
	{
		_putchar(i);
	}

	_putchar('\n');
}
