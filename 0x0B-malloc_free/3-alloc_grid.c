#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - A function that returns a pointer
 *              to a 2 dimensional array of integers.
 *
 * @width: The width of the gird.
 * @height: The height of the gird.
 *
 * Return: The pointer to the new grid otherwise NULL if failed.
*/

int **alloc_grid(int width, int height)
{
	int i, j, **ngrid;

	if (width <= 0 || height <= 0)
		return (NULL);

	ngrid = malloc(sizeof(int *) * height);
	if (ngrid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ngrid[i] = malloc(sizeof(int) * width);

		for (j = 0; j < width; j++)
			if (ngrid[i] == NULL)
				return (NULL);
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ngrid[i][j] = 0;

	return (ngrid);
}
