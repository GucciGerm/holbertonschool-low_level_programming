#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - Here our function will be freeing the dogs
 * @d: is the variable "dog" we are changing
 *
 * Return: 0
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
