#include "main.h"

/**
 * print_rev - A function that prints a string,
 *             in reverse, followed by a new line.
 *
 * @s: string to be reveresd
*/

void print_rev(char *s)
{
	int size = _strlen(s);

	while (size >= 0)
	{
		_putchar(*s);
		size--;
	}

	_putchar('\n');
}
