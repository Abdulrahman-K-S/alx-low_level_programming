#include "main.h"

/**
 * last_index - A function that gets the last index of a string (counts
 *             the null char).
 *
 * @s: Char pointer aka the string to get it's last index.
 *
 * Return: The position of the last character in @s.
*/

int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += last_index(s + 1) + 1;

	return (n);
}

/**
 * check - Checker for the palindrome.
 *
 * @s: Char pointer aka the string to check if it's palindrome.
 * @start: Int moves from right to left.
 * @end: Int moves from left to right.
 * @mod: int.
 *
 * Return: 0 if it's not a palindrome string otherwise 1.
*/

int check(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, mod));
}

/**
 * is_palindrome - Starts the calls to check on the inputed string.
 *
 * @s: Inputed string to test if it's a palindrome.
 *
 * Return: The computed output from check.
*/

int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check(s, 0, end - 1, end & 2));
}
