#include "lists.h"
/**
 *
 *
 *
 *
 */
int pop_listint(listint_t **head)
{
	/* initialize a variable to act as temporary head */
	listint_t *popper;
	/* initialize the variable to return value of deleted head notes data */
	int d;

	if (*head == NULL)
		return (0);

	d = (*head)->n;
	popper = *head;
	/* set head to the second node before we delete the first */ 
 	*head = popper->next;

	free(popper);
	return(d);
}
