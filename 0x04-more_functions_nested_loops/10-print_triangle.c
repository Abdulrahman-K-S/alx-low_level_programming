#include "main.h"

/**
 * print_triangle - A function that prints a triagngle
 *
 * @size: The size of the triangle to be printed
*/

void print_triangle(int size)
{
	int height, base;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (height = 1; height <= size; height++)
		{
			for (base = 1; base <= size; base++)
			{
				if ((height + base) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}

			_putchar('\n');
		}
	}
}
