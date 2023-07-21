#include "main.h"

/**
 * print_line - A function that prints '_' as many times
 *              as the inputed integer
 *
 * @n: The input for the loop
*/

void print_line(int n)
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
