#include <stdio.h>

/**
 * print_rev - this is a function for check out
 * @s: this is the input to work on
 * Decription: 'This function is to check print string in reverse'
 * Return: 0
 */

void print_rev(char *s);

void print_rev(char *s)
{
	int length;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	while (length > -1)
	{
		length--;
		putchar(s[length]);
	}
	putchar('\n');
}
