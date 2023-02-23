#include <stdio.h>

/**
* main - Entry point
* Description: 'This normal function for main document'
* Return: 0 SUCCESS
*/

int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 5) == 0 || (i % 3) == 0)
			sum += i;
	}
	printf("%d\n", sum);

	return (0);
}
