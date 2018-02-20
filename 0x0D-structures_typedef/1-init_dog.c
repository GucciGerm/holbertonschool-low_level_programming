#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Here our function will initialize a variable type of struct dog
 * @d: the variable we would be intializing
 * @name: This represents the name of the puppy
 * @age: This represents the age of the puppy
 * @owner: This represents the name of the owner
 *
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name; /* will assign a name*/
		d->owner = owner; /* will assign an owner to pup */
		d->age = age; /* will assign an age to a pup */
	}
}
