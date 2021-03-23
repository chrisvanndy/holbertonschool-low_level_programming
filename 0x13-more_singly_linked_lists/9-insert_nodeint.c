#include "lists.h"
/**
 *
 *
 *
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *trav, *newIndex;

	trav = *head;

	if (listint_len(*head) <= idx)
		return (NULL);
	
	newIndex = malloc(sizeof(listint_t));
	if (newIndex == NULL)
		return (NULL);

	while (--idx)
		trav = trav->next;


	newIndex->next = trav->next;
	trav->next = newIndex;
	newIndex->n = n;

	return (newIndex);
	
	
}
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	
	return (i);
}
