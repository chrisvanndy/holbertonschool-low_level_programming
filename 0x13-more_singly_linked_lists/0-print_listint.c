#include "lists.h"
/**
 * print_listint - prints  total number of elements in list
 * @h: pointer to node of list
 *
 * Return: integer (i)
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (i);

	while (h->next != NULL)
	{
		i++;
		printf("%u\n", h->n);
		h = h->next;

	}

		i++;
		printf("%u\n", h->n);

	return (i);
}
