#include "main.h"

/**
 * _isupper - Function that checks whether the input
 * is an uppercase or not
 *
 * @c: ASCII value of the character
 *
 * Return: (1) -> If it's an uppercase
 *         (0) -> If it's a lowercase
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
