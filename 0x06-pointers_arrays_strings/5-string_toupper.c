#include "main.h"

/**
 * string_toupper - A function that changes all
 *                  lowercase letters of a string to uppercase.
 *
 * @str: Inputed string.
 *
 * Return: The string in uppercase which is in str.
*/

char *string_toupper(char *str)
{
	int size;

	for (size = 0; str[size] != '\0'; size++)
		if (str[size] >= 'a' && str[size] <= 'z')
			str[size] = str[size] - 32;

	return (str);
}
