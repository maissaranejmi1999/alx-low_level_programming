#include "main.h"

/**
 * alloc_grid - function
 * @width: rows
 * @height: coloms
 * Return: pointer to an array
*/

int **alloc_grid(int width, int height)
{
	int i = 0, j;
	int **arr = (int **)malloc(height * sizeof(int *));

	if (arr == NULL)
		return (NULL);
	while (i < height)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
		i++;
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
