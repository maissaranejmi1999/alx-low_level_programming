#include "main.h"

/**
 * _realloc - function
 * @ptr: pointer
 * @old_size: the old size
 * @new_size: the new size
 * Return: ptr.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i = 0;
	void *nptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	nptr = malloc(new_size);

	if (nptr == NULL)
		return (NULL);

	while (i < old_size && i < new_size)
	{
		((char *)nptr)[i] = ((char *)ptr)[i];
		i++;
	}
	free(ptr);

	return (nptr);
}
