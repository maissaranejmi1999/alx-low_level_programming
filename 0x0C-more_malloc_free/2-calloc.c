#include "main.h"



void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *char_ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	/*memset (ptr, 0, nmemb * size);*/

	char_ptr = ptr;

	while (nmemb--)
		*char_ptr++ = 0;

	return (ptr);
}
