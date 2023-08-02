#include "main.h"

/**
 * check_prime - A function that returns 1 if the input integer
 *               is a prime number, otherwise return 0.
 *
 * @n: The number to check if it's prime or not.
 * @othrn: int parameter.
 *
 * Return: 0 if it's prime otherwise 1.
*/

int check_prime(int n, int othrn)
{
	if (othrn >= n && n > 1)
		return (1);
	else if (n % othrn == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, othrn + 1));
}

/**
 * is_prime_number - Calls the recursive function to check the prime number.
 *
 * @n: Number to check if it's prime or not.
 *
 * Return: The computed number from check_prime.
*/

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
