#include "lists.h"

/**
 * free_list - function
 * @head: double pointer to head of first linked list
 * Description: FREES linked list
 * Return: null
 */
listint_t free_list(listint_t **head)
{
	list_t *new_node = malloc(sizeof(list_t));
	int i = 0;

	if (*head)
	{
		while (new_mode->next != NULL)
			new_mode = new_mode->next;
			free(new_node);
			i++;
	}
	return (NULL);
}
