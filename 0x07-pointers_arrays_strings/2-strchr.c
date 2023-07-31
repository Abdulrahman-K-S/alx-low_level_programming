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
	int i = 0, y = 0;
	char *p;
	bool found = false;

	while (s[i] != '\0')
	{
		if (found)
		{
			p[y++] = s[i];
		}
		else if (s[i] == c)
		{
			found = true;
		}

		i++;
	}

	if (p == NULL)
		return (NULL);
	return (p);
}
