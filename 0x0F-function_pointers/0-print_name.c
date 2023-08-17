#include "functions_pointers.h"

/**
 * print_name - A function that prints a name using the
 *              pointer function given in the parameter.
 *
 * @name: The name to be printed.
 * @f: The pointer function passed.
*/

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL & name != NULL)
		f(name);
}
