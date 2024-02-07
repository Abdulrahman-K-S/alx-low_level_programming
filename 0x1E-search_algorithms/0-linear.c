#include "search_algos.h"

/**
 * linear_search - A function that uses the linear search algorithm to
 *                 find the given value inside the given array.
 *
 * @array: The given array to traverse.
 * @size: The size of the array given.
 * @value: The value to look up in the array given.
 *
 * Return: The index of the value if found otherwise -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
