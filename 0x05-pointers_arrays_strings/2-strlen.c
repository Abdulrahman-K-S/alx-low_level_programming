#include "main.h"

/**
 * _strlen - A function that returns the size of the
 *           inputed string
 *
 * @s: char pointer
*/

int _strlen(char *s)
{
	int size = 0;

	while (*s != '\0')
	{
		size++;
		s++;
	}

	return size;
}
