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
	int **arr = (int **)malloc(width * sizeof(int *));

	if (arr == NULL)
		return (NULL);
	while (i < width)
	{
		arr[i] = (int *)malloc(height * sizeof(int));
		i++;
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
