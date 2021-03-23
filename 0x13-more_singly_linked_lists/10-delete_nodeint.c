#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at nth index place
 * @head: double pointer to head
 * @index: given index to remove node
 * Return: 1 on success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *trav, *next;
	unsigned int x;

	if (*head == NULL)
		return (-1);

	if (index >= listint_len(*head))
		return (-1);

	trav = *head;

	if (index == 0)
	{
		*head = trav->next;
		free(trav);
	}
	else
	{
		for (x = 0; trav != NULL && x < (index - 1); x++)
			trav = trav->next;

		if (trav == NULL || trav->next == NULL)
			return (-1);

		next = trav->next->next;

		free(trav->next);

		trav->next = next;
	}

	return (1);

}
/**
 * listint_len - returns number of nodes in a list
 * @h: pointer to head of list
 * Return: int (i)
 */
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
