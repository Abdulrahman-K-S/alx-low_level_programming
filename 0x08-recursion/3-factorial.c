#include "main.h"

/**
 * factorial - A function that returns the factorial of a given number.
 *
 * @n: The int to get it's factorial.
 *
 * Return: The factorial of @n.
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
