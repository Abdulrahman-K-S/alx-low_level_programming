#include "main.h"

/**
 * _isdigit - Function that checks if the input is
 * a digit from 0 through 9.
 *
 * @c: Digit to check on.
 *
 * Return: (1) -> If it's digit.
 *         (0) -> If it isnt.
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
