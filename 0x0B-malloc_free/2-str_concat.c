#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - A function that concatenates two strings.
 *
 * @s1: First string to concat.
 * @s2: Second string to concat.
 *
 * Return: The concated string pointer if failed to allocat then NULL.
*/

char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *nstr;

	if (s1 == NULL)
		i = 0;
	else
	{
		i = 0;
		while (s1[i] != '\0')
			i++;
	}

	if (s2 == NULL)
		j = 0;
	else
	{
		j = 0;
		while (s2[j] != '\0')
			j++;
	}

	nstr = malloc(sizeof(char) * (i + j + 1));
	if (nstr == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		nstr[k] = s1[k];
	for (; k < j + i; k++)
		nstr[k] = s2[k - i];
	nstr[k] = '\0';

	return (nstr);
}
