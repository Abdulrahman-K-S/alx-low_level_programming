#include "main.h"

/**
 * print_diagonal - A function that prints '\' as many times
 *                  as the inputed n in a diagonal manner
 *
 * @n: The number of diagonals to be placed
*/

void print_diagonal(int n)
{
	int i, y;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (y = 1; y <= i; y++)
				_putchar(' ');
			_putchar(92); /*The equivelent to '\'*/
			_putchar('\n');
		}
	}
}
