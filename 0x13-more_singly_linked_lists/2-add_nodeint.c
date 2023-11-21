#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *  listint_len - check the code
 * @head: node
 * @n: 
 * Return: number of nodes
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t x = 0;

	x = malloc(sizeof (listint_t));
	if (x == NULL)
		return (NULL);
	
	x->n = n;
	x->next = *head;
	x = *head;

	return (x);
}
