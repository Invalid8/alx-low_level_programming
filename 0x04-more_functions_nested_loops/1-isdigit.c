#include <stdio.h>

/**
 * _isdigit - this is a fuction
 * @c: This is the argument of the above function
 * Description: 'This is to check if c is a digit'
 * Return: 0 or 1
 */

int _isdigit(int c);

int _isdigit(int c)
{
    char i;
    int r;

    r = 0;

    for (i = '0'; i <= '9'; i++)
        if (c == i)
        {
            r = 1;
            break;
        }

    return (r);
}
