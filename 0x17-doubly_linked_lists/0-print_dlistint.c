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
	const dlistint_t *nd = h;
	size_t i = 0;

	while (nd != NULL)
	{
		printf("%d\n", nd->n);
		nd = nd->next;
		i++;
	}
	return (i);
}
