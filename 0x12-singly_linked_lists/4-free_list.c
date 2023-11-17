#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - function
 * @head: pointer
*/

void free_list(list_t *head)
{
	list_t *node;

	while (head != NULL)
	{
		node = head->next;
		free(head->str);
		free(head);
		head = node;
	}
}
