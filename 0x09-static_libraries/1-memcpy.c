#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: location stored in memory
 * @src: memory where it is copied
 * @n: amount of bytes
 * Return: copied memory with specified amount of bytes chenged
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int g = 0;
	int m = n;

	for (; g < m; g++)
	{
		dest[g] = src[g];
		n--;
	}
	return (dest);
}
