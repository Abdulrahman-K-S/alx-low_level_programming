#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * wrdcnt - A function that counts the number of words
 *          in a given string.
 *
 * @s: The given string.
 *
 * Return: The number of words in the given string.
*/

int wrdcnt(char *s)
{
	int i, n = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				n++;
		}
		else if (i == 0)
			n++;
	}

	n++;
	return (n);
}

/**
 * strtow - A function that splits a string into words.
 *
 * @str: The string to get it's word split.
 *
 * Return: A pointer to the splited string otherwise NULL.
*/

char **strtow(char *str)
{
	int i, j, k, l, n = 0, wc = 0;
	char **nstr;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = wrdcnt(str);
	if (n == 1)
		return (NULL);
	nstr = malloc(n * sizeof(char *));
	if (nstr == NULL)
		return (NULL);
	nstr[n - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			nstr[wc] malloc(j * sizeof(char));
			j--;
			if (nstr[wc] == NULL)
			{
				for (k = 0; k < wc; k++)
					free(nstr[k]);
				free(nstr[n - 1]);
				free(nstr);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				nstr[wc][l] = str[i + l];
			nstr[wc][l] = '\0';
			wc++;
			i += j;
		}
		else
			i++;
	}
	return (nstr);
}
