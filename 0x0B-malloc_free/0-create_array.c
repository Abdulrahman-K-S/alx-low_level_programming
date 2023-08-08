#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - A function that creates an array of chars,
 *                and initializes it with a specific char.
 *
 * @size: An unsigned int of the size for the array.
 * @c: The character to initalize the array with.
 *
 * Return: A pointer to the array otherwise NULL if
 *         failed.
*/

char *create_array(unsigned int size, char c)
{
	if (size <= 0)
		return (NULL);

	char *arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	int i;

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
