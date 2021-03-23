#include "lists.h"
/**
 *
 *
 *
 */
void free_listint(listint_t *head)
{
	listint_t *new = head;

	while (new)
	{
		head = new;
		new = new->next;
		free(head);
	}
}
