#include "lists.h"
/**
 * free_listint2 - free's list from double pointer
 * @head: double pointer to head of list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *new = *head;

	if (new == NULL)
		return;

	while (new)
	{
		*head = new;
		new = new->next;
		free(*head);
	}
	*head = NULL;
}
