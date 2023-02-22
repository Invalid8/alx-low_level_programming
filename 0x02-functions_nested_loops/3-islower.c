#include <stdio.h>

int _islower(int c);

/**
* _islower - Entry point
* @c: an integer or char
* Description: 'Checking function out'
* Return: 1 if lower or else 0
*/
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}
