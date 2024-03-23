#include "lists.h"

/**
 * add_dnodeint - check the code
 *
 * Description: prints all the elements of a dblk list
 *
 * @h: head of list
 *
 * Return: size_t.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nd = *head;

	(*head)->n = n;
	(*head)->next = nd;
	(*head)->prev = NULL;

	return (*head);
}
