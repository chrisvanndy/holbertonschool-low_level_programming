#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialize struct dog
 * 
 *
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog;
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;	
}
