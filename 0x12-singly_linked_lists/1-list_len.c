#include "lists.h"

/**
 * list_len - function
 * @h: list
 * Return: size of the list
*/

size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		x++;
		h = h->next;
	}
	return (x);
}
