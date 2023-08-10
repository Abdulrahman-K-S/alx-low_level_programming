#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - A function that allocates memory for an array, using malloc.
 *
 * @nmemb: The number of members in the array.
 * @size: The datatype size of those members.
 *
 * Return: Pointer to the array allocated otherwise NULL.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(sizeof(size) * nmemb);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		array[i] = 0;

	return (array);
}
