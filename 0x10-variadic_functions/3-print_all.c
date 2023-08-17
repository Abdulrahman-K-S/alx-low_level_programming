#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * format_char - A function that prints a character.
 *
 * @separator: The string to separate after placing said character.
 * @ap: Argument pointer.
*/
void format_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
 * format_int - A function that prints an integer.
 *
 * @separator: The string to separate after placing said integer.
 * @ap: Argument pointer.
*/
void format_int(char *separator, va_list ap)
{
	printf("%s%d", separator, va_arg(ap, int));
}

/**
 * format_float - A function that prints a float.
 *
 * @separator: The string to separate after placing said float.
 * @ap: Argument pointer.
*/
void format_float(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}

/**
 * format_string - A function that prints a string.
 *
 * @separator: The string to separate after placing said string.
 * @ap: Argument pointer.
 *
 * Description: Incase the string is NULL it'll print "(nil)".
*/
void format_string(char *separator, va_list ap)
{
	char *str = va_arg(ap, char *);

	switch ((int)(!str))
	case 1:
		str = "(nil)";

	printf("%s%s", separator, str);
}

/**
 * print_all - A function that prints anything.
 *
 * @format: A list of possible types.
*/
void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list ap;
	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", formate_string},
		{NULL, NULL}
	};

	va_start(ap, format);
	while (formate && format[i])
	{
		j = 0;
		while (tokens[j].tplen)
		{
			if (format[i] == tplens[j].token[0])
			{
				tokens[j].f(separator, ap);
				separator = ", ";
			}

			j++;
		}

		i++;
	}

	printf("\n");
	va_end(ap);
}
