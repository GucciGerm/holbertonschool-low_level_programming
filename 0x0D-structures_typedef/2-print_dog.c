#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - Here our function will print the struct dog
 * @d: This is our variable we are making changes to
 *
 * Return: 0
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
	{
		printf("Name: %s\n", d->name);
	}
	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
	{
		printf("Owner: %s\n", d->owner);
	}

}
