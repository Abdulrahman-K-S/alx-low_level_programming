#include "main.h"

/**
 * print_times_table - A function that prints the time table
 * depending on the input n
 *
 * @n: An int parameter that decides the stop for the
 * time table to be printed
*/

void print_times_table(int n)
{
	int x, y, num;

	if (n<=15 && n >= 0)
	{
		for (num = 0; num <= n; ++num)
		{
			_putchar('0');

			for (y = 1; y <= n; ++y)
			{
				_putchar(',');;
				_putchar(' ');

				x = num * y;

				if (x <= 9)
					_putchar(' ');
				if (x <= 99)
					_putchar(' ');

				if (x >= 100)
				{
					_putchar((x / 100) + '0');
					_putchar((x / 10) + '0');
				}
				else if (x <= 99 && x >= 10)
					_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}

			_putchar('\n');
		}
	}
}
