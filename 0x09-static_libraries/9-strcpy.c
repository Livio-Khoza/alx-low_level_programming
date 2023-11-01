#include "main.h"
/**
 * char *_strcpy - program copies the string pointed to by src
 * @dest: copies to
 * @src: copies from
 * Return: the string value
 */
char *_strcpy(char *dest, char *src)
{
	int g = 0;
	int m = 0;

	while (*(src + g) != '\0')
	{
		g++;
	}
	for ( ; m < g ; m++)
	{
		dest[m] = src[m];
	}
	dest[g] = '\0';
	return (dest);
}
