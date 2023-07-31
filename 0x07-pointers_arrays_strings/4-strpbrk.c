#include "main.h"

/**
 * _strpbrk - A function that searches a string for any of a set of bytes.
 *
 * @s: Char pointer aka the array to be filtered from.
 * @accept: Char pointer aka the array to be checked from.
 *
 * Return: A pointer to the byte in s that matches one of the
 *         bytes in accept, or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int i, y;

	for (i = 0; s[i] != '\0'; i++)
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[i] == accept[y])
				return (s + i);
		}

	return ('\0');
}
