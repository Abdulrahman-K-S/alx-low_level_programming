#include "main.h"

/**
 * puts_half - A function that prints half of a string,
 *             followed by a new line
 *
 * @str: string pointer.
*/

void puts_half(char *str)
{
	int size = 0, i;

	while (str[size])
		size++;

	for (i = size / 2; i < (size - 1) / 2; i++)
		_putchar(str[i]);

	_putchar('\n');
}
