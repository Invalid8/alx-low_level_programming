#include <stdio.h>

/**
 * _strlen - this is a function for check out
 * @s: this is the input to work on
 * Decription: 'This function is to check string lenght'
 * Return: 0
 */

int _strlen(char *s);

int _strlen(char *s)
{
    int n;

    n = 0;
    while (s[n] != '\0')
        n++;

    return (n);
}
