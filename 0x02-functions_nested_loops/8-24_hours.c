#include <stdio.h>

void jack_bauer(void);

/**
* jack_bauer - Entry point
* @c: the input
* Description: 'This function is for get time from
* 0:00 to 23: 59'
* Return: All time between
*/

void jack_bauer(void)
{
	int H, M;

	for (H = 0; H < 24; H++)
	{
		for (M = 0; M < 60; M++)
		{
			putchar((H / 10) + '0');
			putchar((H % 10) + '0');
			putchar(':');
			putchar((M / 10) + '0');
			putchar((M % 10) + '0');
			putchar('\n');
		}
	}
}
