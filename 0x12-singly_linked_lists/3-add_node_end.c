#include "lists.h"

/**
 * add_node_end - function
 * @head: double pointer to the first element of a linked list
 * @str: string
 * Description: adds a new node at the end of linked list
 * Return: address
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if ((new_node == NULL) || (head == NULL))
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	} else
	{
		list_t *cnode = *head;

		while (cnode->next != NULL)
		{
			cnode = cnode->next;
		}
		cnode->next = new_node;
	}
	return (new_node);
}
