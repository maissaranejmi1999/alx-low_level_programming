#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *  get_nodeint_at_index - function
 *  @head: pointer
 *  @index: nbr of node
 *  Return: node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *x;

	x = head;
	if (index == 0)
		return (head);
	while (x->next != NULL)
	{
		if (i == index)
			return (x);
		i++;
		x = x->next;
	}


	return (NULL);
}
