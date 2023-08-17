#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer.
 *
 * @array: Is a pointer array.
 * @size: is the size of the array.
 * @cmp: is a pointer to the function to be used to compare values.
 *
 * Return: The index of the first element for which the
 *         cmp function does not return 0
*/

int int_index(int *array, int size, int (*cmp)(int));
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}

	return (-1);
}
