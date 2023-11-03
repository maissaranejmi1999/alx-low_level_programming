#include "main.h"

/**
 * _calloc - function
 * @nmemb: variable
 * @size: variable
 * Return: ptr
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	while (nmemb--)
	{
		((char *)ptr)[nmemb] = 0;
	}

	return (ptr);
}
