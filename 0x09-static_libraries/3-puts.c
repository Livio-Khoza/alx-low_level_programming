#include "main.h"
/**
 * _puts - uses stdout to print string
 * @str: the printed string
 * _putchar prints new line
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
