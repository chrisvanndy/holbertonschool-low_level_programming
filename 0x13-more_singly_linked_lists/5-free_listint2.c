#include "lists.h"
/**
 *
 *
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *new = *head;

	while (new)
	{
		*head = new;
		new = new->next;
		free(*head);
	}
	*head = NULL;
}
