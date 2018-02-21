#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * *_strdup - Here our function will return a pointer
 * @str: is the string have as the input and we want to find the size
 *
 * Return: Germ
 */

char *_strdup(char *str)
{
	int j;
	int d;
	char *Germ;

	if (str == 0)
		return (0);

	for (j = 0; str[j] != '\0'; j++)
		;
	Germ = malloc(sizeof(char) * (j + 1));

	if (Germ == 0)
		return (0);

	for (d = 0; d <= j; d++)
		Germ[d] = str[d];

	return (Germ);
}

/**
 * *new_dog - Here our function with create a new dog structure
 * @name: This will be the name of our dog
 * @age: This will be the age of the dog
 * @owner: This will be the name of the owner
 *
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *HelloName; /*we are declaring 2 ptrs to become place holders*/
	char *HelloOwner; /*using those place holders we will duplicate them*/
	dog_t *waffle; /*waffle is the new dog we are creating*/

	HelloName = _strdup(name); /*create a dupl from name to HiName*/
	HelloOwner = _strdup(owner); /*create a dupl from owner to HiOwner*/
	if (HelloName == NULL) /*Our edgecases*/
		return (NULL);
	if (HelloOwner == NULL) /*Our edgecases*/
	{
		free(HelloName);
		return (NULL);
	}
	waffle = malloc(sizeof(dog_t));
	if (waffle == NULL)
	{
		free(HelloName);
		free(HelloOwner);
		return (NULL);
	}
	waffle->name = HelloName;
	waffle->owner = HelloOwner;
	waffle->age = age;
	return (waffle);
}
