#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
char *_strdup(char *str);
int _strlen(char *s);
/**
 * new_dog - new dog 
 * @name: dog name
 * @age: dog age
 * @owner: dog owner:
 * Return: (dog2)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *dog2;
	
	dog2 = malloc(sizeof(struct dog));
	if (dog2 == NULL)
		return (NULL);
	dog2->name = _strdup(name);
		if (dog2->name == NULL)
		{
		free(dog2);
		return (NULL);
		}
	dog2->age = age;
	dog2->owner = _strdup(owner);
		if (dog2->owner == NULL)
		{
		free(dog2);
		return (NULL);
		}

	return (dog2);
}

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strdup - copies string into a pointer to a string
 * @str: string being copied into pointer to string
 *
 * Return: pointer to string
 */
char *_strdup(char *str)
{
	int i;

	char *s;

	if (str == NULL)
		return (NULL);

	s = (char *) malloc(_strlen(str) * sizeof(char) + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
	s[i] = str[i];
	}

	s[i] = '\0';
	return (s);
}

