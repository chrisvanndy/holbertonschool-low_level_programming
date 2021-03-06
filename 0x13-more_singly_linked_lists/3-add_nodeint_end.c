#include "lists.h"
/**
 * add_nodeint_end - appends list with new node at end
 * @head: double pointer to head
 * @n: constant value of n passed to node as data
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *trav;

	trav = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (trav->next != NULL)
		trav = trav->next;

	trav->next = new;

	return (new);
}
