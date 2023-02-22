#include <stdio.h>

/* betty style doc for function main goes there */
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/


void print_alphabet_x10(void);

/* print any alphabet 10 times */
void print_alphabet_x10(void)
{
  int n = 0;

  while (n < 10)
  {
    int i;
    for (i = 'a'; i <= 'z'; ++i)
        putchar(i);

    putchar('\n');
      ++n;
  }
}
