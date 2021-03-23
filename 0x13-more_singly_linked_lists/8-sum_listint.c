#include "lists.h"
/**
 * sum_listint - sums all integer data from given list
 * @head: pointer to head of list of interest 
 * Return: int (total)
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *adds = head;

	while (adds->next != NULL)
	{
		total += adds->n;
		adds = adds->next;
	}
	
	total += adds->n;

	return (total);
}
