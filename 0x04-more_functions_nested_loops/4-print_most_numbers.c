#include "main.h"

/**
 * print_most_numbers - A function that prints the numbers from
 *                 0 to 9 excpet 2 & 4 using _putchar
*/

void print_most_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num == '2' || num == '4')
			continue;
		_putchar(num);
	}

	_putchar('\n');
}
