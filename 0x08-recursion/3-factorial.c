#include "main.h"
/**
 * factorial - returns the factorial of the value
 * @n: returns value
 * Return: n factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
