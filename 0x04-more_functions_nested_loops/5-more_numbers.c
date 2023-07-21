#include "main.h"

/**
 * more_numbers - A function that prints out the numbers
 *                0 to 14 using _putchar
*/

void more_numbers(void)
{
	int num, count;

	for (count = 0; count < 10; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar('1');
				count = count % 10;
			}
			_putchar(count + '0');
		}

		_putchar('\n');
	}
}
