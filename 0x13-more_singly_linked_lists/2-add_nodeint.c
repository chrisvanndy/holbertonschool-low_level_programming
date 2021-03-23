#include "lists.h"
/**
 * add_nodeint - adds new node at begginning of list
 * @head: given head of list
 * @n: given n for data
 * Return: address of new node (tmp)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/* Return address of new element or NULL if failed */
	/* double pointer to head! */

	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));

	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}
