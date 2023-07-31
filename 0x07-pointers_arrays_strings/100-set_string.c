#include "main.h"

/**
 * set_string - A function that sets the value of a pointer to a char.
 *
 * @s: Char pointer pointer that will be the same as @to.
 * @to: Char pointer.
*/

void set_string(char **s, char *to)
{
	*s = to;
}
