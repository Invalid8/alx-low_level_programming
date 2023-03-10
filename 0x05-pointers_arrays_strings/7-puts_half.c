#include <stdio.h>

/**
 * puts_half - this is a function for check out
 * @str: this is the input to work on
 * Decription: 'This function is to put half of string
 * Return: 0
 */

void puts_half(char *str);

void puts_half(char *str)
{
	int n, len, h_len;

	n = 0;
	len = 0;
	h_len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	h_len = len / 2;
	if (len % 2 != 0)
		h_len = (len + 1) / 2;

	n = h_len;
	while (str[n] != '\0')
	{
		putchar(str[n]);
		n++;
	}
	putchar('\n');
}
