#include "main.h"

/**
 * _strncpy - A function that copies a string.
 *
 * @dest: Pointer to the destination output.
 * @src: Pointer to the source input.
 * @n: Bytes of @src.
 *
 * Return: The copied string in @dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
