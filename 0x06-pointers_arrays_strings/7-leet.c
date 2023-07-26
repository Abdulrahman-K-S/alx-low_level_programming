#include "main.h"

/**
 * leet - A function that encodes a string into 1337.
 *
 * @c: char pointer that represents an inputed string.
 *
 * Return: The encoded string in @c
*/

char *leet(char *c)
{
	char *cp = c;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*c)
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
			if ( *c == key[i] || *c == key[i] + 32)
				*c = '0' + value[i];

		c++;
	}

	return (cp);
}
