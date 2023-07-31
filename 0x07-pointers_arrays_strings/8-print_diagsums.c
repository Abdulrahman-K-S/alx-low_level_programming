#include "main.h"

/**
 * print_diagsums - A function that prints the sum of the two
 *                  diagonals of a square matrix of integers.
 *
 * @a: Int pointer aka the 2d int array.
 * @size: Int of the array size.
*/

void print_diagsums(int *a, int size)
{
	int i, dia1 = 0, dia2 = 0;

	for (i = 0; i < size; i++)
	{
		dia1 += a[i];
		dia2 += a[size - i - 1];
		a += size;
	}

	printf("%d, ", dia1);
	printf("%d\n", dia2);
}
