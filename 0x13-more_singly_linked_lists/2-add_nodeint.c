#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - check the code
 * @head: node
 * @n: int
 * Return: number of nodes
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *x;

	x = malloc(sizeof(listint_t));
	if (x == NULL)
		return (NULL);

	x->n = n;
	x->next = *head;
	*head = x;

	return (x);
}
