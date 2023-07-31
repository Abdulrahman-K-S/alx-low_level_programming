#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte.
 *
 * @s: Char poiniter aka the array.
 * @b: The char to be replaced in the array.
 * @n: The number of times for @b to be placed in the array.
 *
 * Return: The modified array pointer @s.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
