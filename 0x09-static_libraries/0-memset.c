#include "main.h"
/**
 * _memset - allocates a specific value to memory
 * @s: is the starting address of memory
 * @b: the wanted value
 * @n: amount of bytes being changed
 * Return: it changes the array with the new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int g = 0;

	for (; n > 0; g++)
	{
		s[g] = b;
		n--;
	}
	return (s);
}
