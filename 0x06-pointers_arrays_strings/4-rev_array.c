#include "main.h"

/**
 * reverse_array - A function that reverses the content of an array of integers.
 *
 * @a: Int array pointer.
 * @n: Size of the array.
*/

void reverse_array(int *a, int n)
{
	int i, y = n - 1, tmp;

	for (i = 0; i < y; i++, y--)
	{
		tmp = a[i];
		a[i] = a[y];
		a[y] = tmp;
	}
}
