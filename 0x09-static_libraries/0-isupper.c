#include "main.h"
/**
 * _isupper - it checks if letters are in uppercase
 * @c: character to chbe checked
 * Return: if it is in upppercase return 1 or else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
