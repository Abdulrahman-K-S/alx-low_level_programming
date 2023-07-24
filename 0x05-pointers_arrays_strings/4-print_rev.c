#include "main.h"

/**
 * print_rev - A function that prints a string,
 *             in reverse, followed by a new line.
 *
 * @s: string to be reveresd
*/

void print_rev(char *s)
{
	while (*s != '\0')
		s++;

	while (*s >= *(s + 0))
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
