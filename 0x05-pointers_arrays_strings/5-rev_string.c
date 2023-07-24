#include "main.h"

/**
 * rev_string - A function that reverses a string.
 *
 * @s: The string to be reversed.
*/

void rev_string(char *s)
{
	int size = 0, i;
	char tmp;

	while (s[size])
		size++;

	for (i = 0; i < size / 2; i++)
	{
		tmp = s[i];
		s[i] = s[size - 1 - i];
		s[size - 1 - i] = tmp;
	}
}
