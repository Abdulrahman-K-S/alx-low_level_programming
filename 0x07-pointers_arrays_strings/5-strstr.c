#include "main.h"

/**
 * _strstr - A function that locates a substring.
 *
 * @haystack: Char pointer aka the array that we'll search in.
 * @needle: Char pointer aka the array that we'll look with.
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	char *s1, *s2;

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			s1 = haystack;
			s2 = needle;

			while (*s1 && *s2)
			{
				if (*s1 != *s2)
					break;

				s1++;
				s2++;
			}

			if (*s2 == '\0')
				return (haystack);
		}

		haystack++;
	}

	return ('\0');
}
