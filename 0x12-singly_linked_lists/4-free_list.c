#include "lists.h"

/**
 * free_list - function
 * @head: pointer to head of first linked list
 * Description: FREES linked list
 */

void free_list(list_t *head)
{
	list_t *new_node = head;

	while (new_node != NULL)
	{
		list_t *move = new_node;

		new_node = new_node->next;
		free(move->str);
		free(move);
	}
}
