#include "lists.h"

/**
 * add_dnodeint - check the code
 *
 * Description: prints all the elements of a dblk list
 *
 * @head: head of list
 *
 * @n: new head data
 *
 * Return: size_t.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nd = malloc(sizeof(dlistint_t));

	if (nd == NULL)
	{
		return (NULL);
	}

	nd->n = n;
	nd->prev = NULL;
	nd->next = (*head);

	if (*head != NULL)
	{
		(*head)->prev = nd;
	}

	(*head) = nd;

	return (nd);
}
