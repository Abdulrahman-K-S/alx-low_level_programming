#include "main.h"

/**
 * rev_string - A function that reverses a string.
 *
 * @s: The string to be reversed.
*/

void rev_string(char *s)
{
	int size = 0, rsize = 0;
	char *rev;

	while (s[size])
		size++;

	while (size--)
	{
		rev[rsize] = s[size];
		rsize++;
	}

	*s = *rev;
}
