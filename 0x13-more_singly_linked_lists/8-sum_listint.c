#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *  sum_listint - function.
 *  @head: first node.
 *  Return: int.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head->next != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}

