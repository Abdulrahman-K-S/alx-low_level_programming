#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix substring.
 *
 * @s: Char pointer aka the array.
 * @accept: The char pointer that'll get compared to for the substrings.
 *
 * Return: The number of bytes in the initial segment of @s
 *         which consist only of bytes from @accept
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, y;

	for (i = 0; s[i] != '\0'; i++)
		for (y = 0; accept[y] != s[i]; y++)
		{
			if (accept[y] == '\0')
				return (i);
		}

	return (i);
}
