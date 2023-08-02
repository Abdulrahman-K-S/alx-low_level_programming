#include "main.h"

/**
 * _puts_recursion - A function that prints a string, followed by a new line.
 *
 * @s: Char pointer aka the string array to be printed.
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
