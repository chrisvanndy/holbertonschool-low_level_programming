#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialize struct dog
 * @d: pointer to struct
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	struct dog;
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
