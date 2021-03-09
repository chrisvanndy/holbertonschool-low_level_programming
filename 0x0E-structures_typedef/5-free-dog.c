#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - function free's dog
 * @d: parameters of struct
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	struct dog;

	if (d != NULL)
	{
	free(d);
	free(d->name);
	free(d->owner);
	}	
}
