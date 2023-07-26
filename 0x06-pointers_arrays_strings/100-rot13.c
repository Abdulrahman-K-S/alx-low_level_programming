#include "main.h"

/**
 * rot13 - A function that encodes a string using rot13.
 *
 * @str: input string.
 *
 * Return: Return the encoded string in ptr.
*/

char *rot13(char *str)
{
	int i;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = str;

	while (*str)
	{
		for (i = 0; i <= 52; i++)
			if (*s == rot13[i])
			{
				*s = ROT13[i];
				break;
			}

		str++;
	}

	return (ptr);
}
