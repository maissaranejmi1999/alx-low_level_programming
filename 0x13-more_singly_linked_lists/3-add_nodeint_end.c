#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - check the code
 * @head: node
 * @n: int
 * Return: number of nodes
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		node = *head;
		while (node->next != NULL)
			node = node->next;
		node->next = new_node;
	}

	return (new_node);
}
