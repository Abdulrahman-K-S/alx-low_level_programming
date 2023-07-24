#include "main.h"

/**
 * print_rev - A function that prints a string,
 *             in reverse, followed by a new line.
 *
 * @s: string to be reveresd
*/

void print_rev(char *s)
{
	int size = 0;

	while (s[0])
		size++;

	while (size--)
		_putchar(s[size]);

	_putchar('\n');
}
