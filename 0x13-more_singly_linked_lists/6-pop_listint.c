#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - function
 * @head: pointer
 * Return: head data
*/

int pop_listint(listint_t **head)
{
	int x;
	listint_t *y;

	if (*head == NULL)
		return (0);

	y = (*head)->next;

	x = (*head)->n;

	free(*head);

	*head = y;

	return (x);
}
