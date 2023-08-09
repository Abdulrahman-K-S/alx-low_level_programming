#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - A function that returns a pointer to a newly allocated space
 *           in memory, which contains a copy of the string given
 *           as a parameter.
 *
 * @str: The string to be copyed to a new pointer.
 *
 * Return: The new pointer with the copied string otherwise NULL.
*/

char *_strdup(char *str)
{
	int i, j;
	char *nstr;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	nstr = malloc(sizeof(char) * i + 1);

	if (nstr == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		nstr[j] = str[j];
	nstr[j] = '\0';

	return (nstr);
}
