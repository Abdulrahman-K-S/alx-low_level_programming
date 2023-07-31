#include "main.h"

/**
 * _memcpy - A function that copies memory area.
 *
 * @dest: The destination of the copy.
 * @src: The source of the copy.
 * @n: Number of items to be copied.
*
* Return: The destination pointer @dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
