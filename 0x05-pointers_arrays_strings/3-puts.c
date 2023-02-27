#include <stdio.h>

/**
 * _puts - this is a function for check out
 * @str: this is the input to work on
 * Decription: 'This function is to check print string'
 * Return: 0
 */

void _puts(char *str);

void _puts(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		putchar(str[n]);
		n++;
	}
	putchar('\n');
}
