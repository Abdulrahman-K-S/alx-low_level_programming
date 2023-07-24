#include "main.h"

/**
 * swap_int - A function that swaps both
 *            parameters
 *
 * @a: first int pointer
 * @b: second int pointer
*/

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
