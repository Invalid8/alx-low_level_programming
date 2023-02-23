#include <stdio.h>

int _islower(int c);

/**
* _islower - Entry point
* @c: the input
* Description: 'This function is for printing alphabets out'
* Return: 1 or 0
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
