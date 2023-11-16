#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - function
 * @head: a pointer to the first element of the node
 * @str: pointer to a string
 * Return: pointer
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = strlen(str);
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
