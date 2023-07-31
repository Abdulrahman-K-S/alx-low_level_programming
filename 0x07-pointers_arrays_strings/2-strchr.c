#include "main.h"

/**
 * _strchr - A function that locates a character in a string.
 *
 * @s: Char pointer aka the char array.
 * @c: The character to locate.
 *
 * Return: The new pointer array of the word from the first
 *         occurence of @c.
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
		{
			return (s + i);
		}

	return ('\0');
}
