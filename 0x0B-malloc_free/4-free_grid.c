#include "main.h"

/**
 * free_grid - function
 * @grid: array
 * @height: its height
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
