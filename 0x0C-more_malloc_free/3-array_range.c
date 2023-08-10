#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - A function that creates an array of integers.
 *
 * @min: The starting point for the array.
 * @max: The ending point for the array.
 *
 * Return: The array including the min to max otherwise NULL.
*/

int *array_range(int min, int max)
{
	int i, j = min, *array;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min));
	if (array == NULL)
		return (NULL);

	for (i = 0; j <= max; i++, j++)
		array[i] = j;

	return (array);
}
