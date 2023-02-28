#include <stdio.h>

/**
 * rev_string - this is a function for check out
 * @s: this is the input to work on
 * Decription: 'This function is to check print string in reverse'
 * Return: 0
 */

void rev_string(char *s);

void rev_string(char *s)
{
	int len, i, j;
	char temp;

	len = 0;
	i = 0;

	while (s[len] != '\0')
		len++;

	j = len - 1;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j--;
		i++;
	}
}
