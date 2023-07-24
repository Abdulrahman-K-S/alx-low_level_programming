#include "main.h"

/**
 * puts2 - A function that prints every other character of a string,
 *         starting with the first character, followed by a new line.
 *
 * @str: string pointer
*/

void puts2(char *str)
{
	int size = 0, i;

	while (str[size])
		size++;

	for (i = 0; i < size; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		else
			continue;
	}

	_putchar('\n');
}
