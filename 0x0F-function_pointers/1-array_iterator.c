#include "function_pointers.h"

/**
 * array_iterator - A function that executes a function given as a
 *                  parameter on each element of an array.
 *
 * @array: Is a pointer array.
 * @size: is the size of the array.
 * @action: Is a pointer to the function you need to use.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
