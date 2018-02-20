#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

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
	int j, str_len, owner_len;
	dog_t *Shoku;

	Shoku = malloc(sizeof(dog_t));
	if (Shoku == NULL)
		return (NULL);

	if (name != NULL)
	{
		for (j = 0; name[j] != '\0'; j++)
		{
			str_len++;
		}
		Shoku->name = malloc(sizeof(char) * (str_len + 1));
		if (Shoku->name == NULL)
		{
			free(Shoku->name);
			return (NULL);
		}
		for (j = 0; j < str_len; j++)
			Shoku->name[j] = name[j];
		if (Shoku->owner != NULL)
		{
			for (j = 0; owner[j] != '\0'; j++)
			{
				owner_len++;
			}
			Shoku->owner = malloc(sizeof(char) * (owner_len + 1));
			if (Shoku->owner == NULL)
			{
				free(Shoku->name);
				free(Shoku);
				return (NULL);
			}
		}
		Shoku->age = age;
	}
	return (Shoku);
}
