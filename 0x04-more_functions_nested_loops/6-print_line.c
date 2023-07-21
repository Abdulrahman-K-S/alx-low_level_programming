#include "main.h"

/**
 * print_line - A function that prints '_' as many times
 *              as the inputed integer
 *
 * @n: The input for the loop
*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
