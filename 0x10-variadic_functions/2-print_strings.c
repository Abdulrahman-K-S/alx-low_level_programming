#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - A function that prints strings, followed by a new line.
 *
 * @separator: The string to be printed between the strings.
 * @n: The number of strings going to be inputed after it.
 * @...: The strings to be printed.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list ap;
	char str;

	if (!n)
	{
		printf('\n');
		return;
	}

	va_start(ap, n);

	for (i = n; i > 0; i--)
	{
		str = va_arg(ap, char);
		printf("%s%s", str ? str : "(nil)", separator ? separator : "");
	}
	printf('\n');

	va_end(ap);
}
