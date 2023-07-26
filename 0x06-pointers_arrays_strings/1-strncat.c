#include "main.h"

/**
 * *_strncat - A function that concatenates two strings.
 *
 * @dest: Pointer to the destination input.
 * @src: Pointer to the source input.
 * @n: Number of bytes from @src.
 *
 * Return: The concatenated string in @dest.
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, y = 0;

	while (dest[i])
		i++;

	while (y < n && src[y] != '\0')
	{
		dest[i + y] = src[y];
		y++;
	}

	dest[i + y] = '\0';

	return (dest);
}
