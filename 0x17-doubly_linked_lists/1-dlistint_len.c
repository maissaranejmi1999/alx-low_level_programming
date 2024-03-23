#include "lists.h"

/**
 * dlistint_len - check the code
 *
 * Description: prints all the elements of a dblk list
 *
 * @h: head of list
 *
 * Return: size_t.
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t * nd;
	size_t i = 0;

	while (nd != NULL)
	{
		i++;
		nd = nd->next;
	}
	return (i);
}
