#include "main.h"

/**
 * malloc_checked - function.
 * @b: variable.
 * Return: pointer.
*/

void *malloc_checked(unsigned int b)
{
	void *allm;

	if (b == 0)
		exit(98);
	allm = (void *)malloc(b);

	if (allm == NULL)
		exit(98);

	return (allm);
}
