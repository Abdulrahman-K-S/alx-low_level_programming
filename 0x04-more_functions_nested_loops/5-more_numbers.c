#include "main.h"

/**
 * more_numbers - A function that prints out the numbers
 *                0 to 14 using _putchar 10 times
*/

void more_numbers(void)
{
	int num, count, x;

	for (count = 0; count < 10; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			x = num;
			if (num > 9)
			{
				_putchar('1');
				x = num % 10;
			}
			_putchar(x + '0');
		}

		_putchar('\n');
	}
}
