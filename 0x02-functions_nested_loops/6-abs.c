#include <stdio.h>

int _abs(int r);

/**
* _abs - Entry point
* @c: the input
* Description: 'This function is for converting
* numbers to absolute numbers'
* Return: the absolute of @c
*/

int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
