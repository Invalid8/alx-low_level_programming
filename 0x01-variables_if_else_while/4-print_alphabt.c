#include <stdio.h>

/* betty style doc for function main goes there */
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low == 'e' || low == 'q')
		{
			continue;
		}
		putchar(low);
	}
	putchar('\n');
	return (0);
}
