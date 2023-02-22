#include "_putchar.c"
/* betty style doc for function main goes there */
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

/* this function is to print alphabet */
void print_alphabet(void)
{
  char i;
  
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
