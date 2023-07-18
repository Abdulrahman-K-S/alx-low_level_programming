#include "main.h"

/**
 * _isalpha - A function that checks whether the
 * incoming character is upper/lower-case.
 *
 * @c: Holds the ASCII value of the character to
 * check on.
 *
 * Return: (1): if it's a lower/upper case otherwise
 * it's a (0).
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
