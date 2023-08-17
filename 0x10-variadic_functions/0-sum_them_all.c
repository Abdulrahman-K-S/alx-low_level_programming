#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - A function that returns the sum of all its parameters.
 *
 * @n: The number of arguments that will be entered.
 *
 * Return: The summation of all the numbers entered.
*/

int sum_them_all(const unsigned int n, ...)
{
	int i, sum;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);
	for (i = n, sum = 0; i > 0; i--)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
