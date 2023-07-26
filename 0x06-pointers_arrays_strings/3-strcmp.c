#include "main.h"

/**
 * _strcmp - A function that compares two strings.
 *
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: 1 -> If they're equal
 *         0 -> Otherwise
*/

int _strcmp(char *s1, char *s2)
{
	int equal = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			equal = ((int)*s1 - '0') - ((int)*s2 - '0');
			break;
		}

		s1++;
		s2++;
	}

	return (equal);
}
