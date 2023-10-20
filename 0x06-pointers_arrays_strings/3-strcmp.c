#include "main.h"
/**
 * _strcmp - concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * if str1 == str2, 0
 * if str1 > str2, the positive difference
 * Return: if str1 < str2, the negetive difference
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
