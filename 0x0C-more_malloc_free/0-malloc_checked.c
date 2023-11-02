#include "main.h"
#include <limits.h>

/**
 * malloc_checked - function.
 * @b: variable.
 * Return: pointer.
*/

void *malloc_checked(unsigned int b)
{
	int *allm = malloc(b);

	if (allm == NULL)
		exit(98);

	return (allm);
}
