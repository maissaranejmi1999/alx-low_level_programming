#include "main.h"

/**
 * free_grid - function
 * @grid: array
 * @height: its height
*/

void free_grid(int **grid, int height)
{
	(void) height;
	int i = 0;

	while (grid[i])
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
