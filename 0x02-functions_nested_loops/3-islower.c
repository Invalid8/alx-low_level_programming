#include <stdio.h>

int _islower(int c);

/**
* _islower - Entry point
* c - integer
* Description: 'Checking numbers out'
* Return: 1 or 0
*/

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
