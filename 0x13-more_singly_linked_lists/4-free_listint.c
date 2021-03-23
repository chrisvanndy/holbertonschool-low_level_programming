#include "lists.h"
/**
 * free_listint - free's a list via pointer
 * @head: pointer to list
 * Return: void
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
