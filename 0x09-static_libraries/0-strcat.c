#include "main.h"
/**
 * _strcat - it is a function that concatenates 2 strings
 * @dest: the entered value
 * @src: the entered value
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int g;
	int m;

	g = 0;
	while (dest[g] != '\0')
	{
		g++;
	}
	m = 0;
	while (src[m] != '\0')
	{
		dest[g] = src[m];
		g++;
		m++;
	}
	dest[g] = '\0';
	return (dest);
}
