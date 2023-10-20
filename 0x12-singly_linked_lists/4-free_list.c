#include "lists.h"

/**
 * free_list - function
 * @head: double pointer to head of first linked list
 * Description: FREES linked list
 */

void free_list(list_t **head)
{
	list_t *new_node = head;
	int i = 0;

	if (*head)
	while (new_node != NULL)
	{
		new_node = new_mode->next;
		free(new_node->str);
		i++;
	}
}
