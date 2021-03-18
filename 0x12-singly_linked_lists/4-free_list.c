#include "lists.h"
/**
 * free_list - free memory of linked list
 * @head: pointer to node
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{ 
		tmp = head;	
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
