listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nd, *x, *y;

	nd = malloc(sizeof(listint_t));
	if (nd == NULL)
		return (NULL);
	nd->n = n;

	x = *head;
	for (i = 0; (x->next != NULL) && (i > idx); i++)
	{
		x = x->next;
	}
	if (i == idx)
		y = x->next;
		x->next = nd;
		nd->next = y;
		

}
