#include "main.h"

/**
 * isLower - A function that determines whether the inputed
 *           ASCII is lowercase or not
 *
 * @c: Inputed character.
 *
 * Return: 1 -> If it's lowercase
 *         0 -> Otherwise
*/

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - A function that determines whether the inputed
 *               character's ASCII is one of the delimeters or not
 *
 * @c: Inputed character.
 *
 * Return: 1 -> If it is a delimiter
 *         0 -> Otherwise
 */

int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);

	return (0);
}

/**
 * cap_string - A function that capitalizes all words of a string.
 *
 * @str: Inputed string
 *
 * Return: The captalized string in str
*/

char *cap_string(char *str)
{
	char *ptr = str;
	int foundDelimit = 1;

	while (*str)
	{
		if (isDelimiter(*str))
			foundDelimit = 1;
		else if (isLower(*str) && foundDelimit)
		{
			*str -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;

		str++;
	}

	return (ptr);
}
