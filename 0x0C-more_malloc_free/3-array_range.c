#include "main.h"

/**
 * array_range - function
 * @min: variable
 * @max: variable
 * Return: ptr
*/

int *array_range(int min, int max)
{
	int i = 0;
	int *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	while (i < (max - min + 1))
	{
		ptr[i] = min + i;
		i++;
	}

	return (ptr);
}
