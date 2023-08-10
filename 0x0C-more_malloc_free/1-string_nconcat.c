#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * string_nconcat - A function that concatenates two strings.
 *
 * @s1: First string to concat.
 * @s2: Second string to concat.
 * @n: Number of bytes to concat from @s2.
 *
 * Return: The concated string otherwise NULL.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *concatString;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0' && j != n; j++)
		;

	concatString = malloc(sizeof(char) * (i + j) + 1);
	if (concatString == NULL)
		exit(NULL);

	for (k = 0; k < i; k++)
		concatString[k] = s1[k];
	for (; k < j + i; k++)
		concatString[k] = s2[k - i];

	concatString[k] = '\0';
	return (concatString);
}
