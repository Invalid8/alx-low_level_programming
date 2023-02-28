#include <stdio.h>

/**
 * _strcpy - this is a function for check out
 * @dest: this is the array something
 * @src: this is src
 * Decription: 'This function is to join'
 * Return: 0
 */

char *_strcpy(char *dest, char *src);

char *_strcpy(char *dest, char *src)
{
	char i;

	for (int i = 0; src[i] != '\0'; ++i)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}
