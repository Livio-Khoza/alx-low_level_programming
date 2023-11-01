#include "main.h"
/**
 * _atoi - converts a string into an int
 * @s: the string being used
 * Return: int
 */
int _atoi(char *s)
{
	int sign = 1, g = 0;
	unsigned int res = 0;

	while (!(s[g] <= '9' && s[g] >= '0') && s[g] != '\0')
	{
		if (s[g] == '-')
			sign *= -1;
		g++;
	}
	while (s[g] <= '9' && (s[g] >= '0' && s[g] != '\0'))
	{
		res = (res * 10) + (s[g] - '0');
		g++;
	}
	res *= sign;
	return (res);
}
