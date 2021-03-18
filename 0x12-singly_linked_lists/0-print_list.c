#include "lists.h"

/**
 * print_list - prints argumetns in linked list
 * @h: pointer to node
 *
 * Return: size_t (i)
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (i);

	while (h->next != NULL)
	{
		i++;
		if (h->str == NULL)
		{
		printf("[0] (nil)\n");
		}
		else
		{
		printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}
		i++;
		if (h->str == NULL)
		{
		printf("[0] (nil)\n");
		}
		else
		{
		printf("[%u] %s\n", h->len, h->str);
		}

	return (i);
}
