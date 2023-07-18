#include "main.h"

/**
 * print_last_digit - A function that returns the last digit
 * of an entered number
 *
 * @n: The number entered to take the last digit from
 *
 * Return: (last_digit) the digit extracted from the input
*/

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n *= -1;

	last_digit = n % 10;

	_putchar('0' + last_digit);
	return (last_digit);
}
