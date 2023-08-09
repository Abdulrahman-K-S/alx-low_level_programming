#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strlen - A function that returns the length of a string.
 *
 * @c: The string.
 *
 * Return: The lenght of the string.
*/

int _strlen(char *c)
{
	int size = 0;

	while (c[size] != '\0')
		size++;

	return (size);
}

/**
 * argstostr - A function that concatenates all the arguments of your program.
 *
 * @ac: Number of arguments.
 * @av: The argument aarray.
 *
 * Return: A pointer with the concated arguments otherwise NULL.
*/

char *argstostr(int ac, char **av)
{
	int i, j, nc = 0, nsize = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++, nc++)
		nc += _strlen(av[i]);

	str = malloc(nc * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, nsize++)
			str[nsize] = av[i][j];

		str[nsize++] = '\n';
	}

	str[nsize] = '\0';
	return (str);
}
