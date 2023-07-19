#include "main.h"

/**
 * times_table - A function that prints out the time table
 * of 0 through to 9.
*/

void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			product = i * j;

			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');

			_putchar((product % 10) + '0');
		}

		_putchar('\n');
	}
}
