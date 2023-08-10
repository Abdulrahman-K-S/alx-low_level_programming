#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - A function that allocates memory using malloc.
 *
 * @b: The size to allocate.
 *
 * Return: The pointer to the new size otherwise 98.
*/

void *malloc_checked(unsigned int b)
{
	int *new_size = malloc(b);

	if (new_size == NULL)
		exit (98);

	return (new_size);
}
