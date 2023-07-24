#include "main.h"

/**
 * puts_half - A function that prints half of a string,
 *             followed by a new line
 *
 * @str: string pointer.
*/

void puts_half(char *str)
{
	int size = 0;

	while (str[size])
		size++;

	for (size /= 2; str[size] < '\0'; size++)
		_putchar(str[size]);

	_putchar('\n');
}
