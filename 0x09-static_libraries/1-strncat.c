#include "main.h"
/**
 * _strncat - a function that concatenate 2 strings
 * @dest: entered value
 * @src: entered value
 * @n: entered value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int g;
	int m;

	g = 0;
	while (dest[g] != '\0')
	{
		g++;
	}
	m = 0;
	while (m < n && src[m] != '\0')
	{
		dest[g] = src[m];
		g++;
		m++;
	}
	dest[g] = '\0';
	return (dest);
}
