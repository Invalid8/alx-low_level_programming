#include <stdio.h>

int _isalpha(int c);

/**
* _isalpha - Entry point
* @c: the input
* Description: 'This function is for checking out alphabetic input'
* Return: 1 if true or 0 if false
*/

int _isalpha(int c)
{
	char i, j;
	int alpha = 0;

	for (i = 'a'; i <= 'z'; i++)
		for (j = 'A'; j <= 'Z'; j++)
		{
			if (i == c || j == c)
				alpha = 1;
		}

	return (alpha);
}
