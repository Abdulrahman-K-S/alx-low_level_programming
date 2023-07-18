#include "main.h"

/**
 * _islower - A function that checks whether it's a
 * lowercase or not.
 *
 * @c: ASCII of the character
 *
 * Return: (1) if it's a lowercase otherwise returns (0).
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
