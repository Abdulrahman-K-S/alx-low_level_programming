#include "main.h"

/**
 * square - A function that returns the natural square root of a number.
 *
 * @n: The number to find it's square root.
 * @val: The square root to be returned.
 *
 * Return: The natural square root of @n.
*/

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - Calls the recursive function square.
 *
 * @n: The number to find it's square root.
 *
 * Return: The natural square root of @n.
*/

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
