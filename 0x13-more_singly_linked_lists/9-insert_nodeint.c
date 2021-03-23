#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new node at given index place
 * @head: doouble pointer to head of list of interest
 * @idx: give ui of index place to insert new node
 * @n: data to be assigned to newnode->n
 * Return: address of newIndex
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *trav, *newIndex;

	trav = *head;

	if (listint_len(*head) < idx)
		return (NULL);

	newIndex = malloc(sizeof(listint_t));
	if (newIndex == NULL)
		return (NULL);

	if (idx == 0)
	{
		/* if making a new head of the liststart  */
		newIndex->n = n;
		newIndex->next = *head;
		/* point head to new begginning of list */
		*head = newIndex;
		return (newIndex);
	}

	while (--idx)
		trav = trav->next;


	newIndex->next = trav->next;
	trav->next = newIndex;
	newIndex->n = n;

	return (newIndex);


}
/**
 * listint_len - returns total number of nodes in list
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
