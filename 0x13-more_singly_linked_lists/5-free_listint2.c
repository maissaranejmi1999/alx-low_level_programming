#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - function
 * @head: ptr to ptr
 */

void free_listint2(listint_t **head)
{
	listint_t *x;

	while (*head != NULL)
	{
		x = (*head)->next;
		free(*head);
		*head = x;
	}
	*head = NULL;
}
