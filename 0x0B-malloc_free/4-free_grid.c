#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid - A function that frees a 2 dimensional grid
 *             previously created by your alloc_grid function.
 *
 * @grid: The grid to free up.
 * @height: The height of the grid.
*/

void free_grid(int **grid, int height)
{
	while (height--)
		free(grid[height]);
	free(grid);
}
