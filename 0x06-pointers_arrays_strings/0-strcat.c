#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings
 * @dest: is the destination string
 * @src: is the source string
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}
	dest[dlen] = '\0';
	return (dest);
}
