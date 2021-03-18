#include "lists.h"
/**
 * add_node_end - appends list from the end
 * @head: pointer to beginning of list
 * @str: constant string passed
 * Return: address of new node (tmp)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp, *trav;

	if (str == NULL)
		return (NULL);
	if (*head == NULL)
	{
		tmp = malloc(sizeof(list_t)); /* <-create a structure */
		if (tmp == NULL)  /* <- always null checK */
			return (NULL);
		tmp->str = strdup((char *)str); /* <- begin filling in structure */
		if (tmp->str == NULL)
		{
			free(tmp);
			return (NULL);
		}
		tmp->len = (unsigned int)_strlen(tmp->str);
		tmp->next = NULL;
		*head = tmp;  /* <- point head to new structure's address */
		return (tmp); /* <- we're done return the pointer */
	}
	/* if the list already exists */
	tmp = malloc(sizeof(size_t));
	if (tmp == NULL)
		return (NULL);
	tmp->str = strdup((char *)str);
	if (tmp->str == NULL)
	{
		free(tmp);
		return (NULL);
	}
	tmp->len = (unsigned int)_strlen(tmp->str);
	tmp->next = NULL;
	/* point to where head is pointing to */
	trav = *head;
	while (trav->next != NULL) /* <- find the end of the list */
		trav = trav->next;
	/* set final element's "next" to address of new node */
	trav->next = tmp;
	return (tmp);  /* <- return address of new node */
}
/**
 * _strlen - length of string
 * @s: str
 * Return: int (length of string in bytes)
 */
int _strlen(char *s)
{
	int i;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

