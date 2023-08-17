#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - A function that prints numbers, followed by a new line.
 *
 * @separator: The separator between each number.
 * @n: The number of elements passed after it.
 * @...: The integers to print.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list ap;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(ap, n);

	for (i = n; i >= 0; i--)
		printf("%d%s", va_arg(ap, int),
		       i ? (separator ? separator : "") : "\n");

	va_end(ap);
}
