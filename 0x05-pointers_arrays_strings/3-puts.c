#include "main.h"

/**
 * _puts - A function that hat prints a string,
 *         followed by a new line, to stdout
 *
 * @s: char pointer
*/

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}

	_putchar('\n');
}
