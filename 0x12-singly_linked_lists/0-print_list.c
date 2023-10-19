#include <stdio.h>

/**
 * print_list - function
 * @h: node
 * Return: size_t
*/

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		printf("[%d] (%s)\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
