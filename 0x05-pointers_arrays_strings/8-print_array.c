#include "main.h"

/**
 * print_array - A function that prints n elements of an array
 *               of integers, followed by a new line
 *
 * @a: int pointer (The array)
 * @n: number of elementes to be printed
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
			printf(',');
		else
			continue;
	}

	printf('\n');
}
