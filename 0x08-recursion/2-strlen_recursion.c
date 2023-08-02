#include "main.h"

/**
 * _strlen_recursion_int - A function that returns the
 *                     length of a string. (Recursivly)
 *
 * @s: Char pointer aka the string to get its length.
 * @n: Int variable for the length of the string.
 *
 * Return: The length of the string @n.
*/

int _strlen_recursion_int(char *s, int n)
{
	if (*s > '\0')
		_strlen_recursion_int(s + 1, n + 1);

	return (n);
}

/**
 * _strlen_recursion - This function calls the recursive _strlen_recursion
 *                     function that has an extra parameter to calculate the
 *                     the size of the string.
 *
 * @s: Char pointer aka the string to get its length.
 *
 * Return: The value computed from the recursive function.
*/

int _strlen_recursion(char *s)
{
	return (_strlen_recursion_int(s, 0));
}
