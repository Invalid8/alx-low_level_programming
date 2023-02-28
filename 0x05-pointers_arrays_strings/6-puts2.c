#include <stdio.h>

/**
 * puts2 - this is a function for check out
 * @str: this is the input to work on
 * Decription: 'This function is to check print two of string
 * Return: 0
 */

void puts2(char *str);

void puts2(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		putchar(str[n]);
		n += 2;
	}
	putchar('\n');
}
