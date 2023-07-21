#include "main.h"

/**
 * print_diagonal - A function that prints '\' as many times
 *                  as the inputed n in a diagonal manner
 *
 * @n: The input for the loop
*/

void print_diagonal(int n)
{
	int i, y;

	for (i = 0; i < n; i++)
	{
		for (y = 0; y < n; y++)
			_putchar(' ');
		_putchar('\');
		_putchar('\n');
	}
}
