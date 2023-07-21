#include "main.h"

/**
 * print_square - A function that prints a square of '#'
 *                depnding on the input
 *
 * @size: Determines the size of the square
*/

void print_square(int size)
{
	int i, y;

	for (i = 0; i < size; i++)
	{
		for (y = 0; y < size; y++)
			_putchar('#');

		_putchar('\n');
	}
}
