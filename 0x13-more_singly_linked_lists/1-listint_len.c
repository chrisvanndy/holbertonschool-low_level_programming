#include "lists.h"
/**
 * listint_len - returns number of nodes in list
 * @h: pointer to head of list
 *
 * Return: integer (i)`
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
