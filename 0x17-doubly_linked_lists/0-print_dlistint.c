#include "lists.h"

/**
 * print_dlistint - check the code
 *
 * Description: prints all the elements of a dblk list
 *
 * @h: head of list
 *
 * Return: size_t.
 */

size_t print_dlistint(const dlistint_t *h)
{
	const listint_t *nd = malloc(sizeof(dlistint_t));
	size_t i = 0;

	printf("%d\n", h->n);
	nd->prev = h;
	while (nd->next != NULL)
	{
		printf("%d\n", nd->n);
		nd->next = nd;
		i++;
	}
	return (i);
}
