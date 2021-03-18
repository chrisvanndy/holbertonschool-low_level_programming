#include "lists.h"
/**
 * add_node - adds node to begginning of list
 * @head: pointer to node
 * @str: contsant string
 */
list_t *add_node(list_t **head, const char *str)
{	
	list_t *new;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = (unsigned int)_strlen(new->str);
	new->next = *head;
	*head = new;
	return (*head);
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
