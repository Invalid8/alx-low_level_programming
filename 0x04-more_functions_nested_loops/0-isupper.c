#include <stdio.h>

int _isupper(int c);
/**
* _isupper: this is a function for check out
* @c: 'This is the value to check'
* Decription: 'This function is to check if input is upper case'
* Return: 0 or 1 SUCCESS
*/

int _isupper(int c)
{
	char i;
	int r;

	r = 0;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			r = 1;
		}
	}

	return (r);
}

