#include "lists.h"
/**
 * get_nodeint_at_index - returns value at given index place
 * @head: pointer to head of list
 * @index: integer passed as index place of node of interest
 * Return: address of node of interest
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	/* declare counting variable and temp variable for function */
	unsigned int x = 0;
	listint_t *findIndex;

	if (index >= listint_len(head))
		return (NULL);

	findIndex = head;

	while (x < index)
	{
		findIndex = findIndex->next;
		x++;
	}

	return (findIndex);
}
/**
 * listint_len - total number of nodes in a list
 * @h: pointer to head of given list
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
