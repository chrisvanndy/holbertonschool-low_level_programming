#include "lists.h"
/**
 * list_len - returns number of nodes in a list
 * @h: pointer to node
 * Return: size_t (count)
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);
	while (h->next != NULL)
	{
		count++;
		h = h->next;
	}
	count++;
	return (count);
}
