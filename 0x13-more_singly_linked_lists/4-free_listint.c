#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - function
 * @head: pointer
*/

void free_listint(listint_t *head)
{
	listint_t *x;
	while (head != NULL)
		x = head->next;
		free(head->n);
		free(head);
		head = x;
}
