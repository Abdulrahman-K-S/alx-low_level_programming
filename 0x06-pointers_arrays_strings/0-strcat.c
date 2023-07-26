#include "main.h"

/**
 * *_strcat - A function that concatenates two strings.
 *
 * @dest: Pointer to destination input.
 * @src: Pointer to source input.
 *
 * Return: Pointer to the resulting string @dest.
*/

char *_strcat(char *dest, char *src)
{
	int i = 0, y = 0;

	while (dest[i])
		i++;

	while (src[y])
		dest[i++] = src[y++];

	return (dest);
}
