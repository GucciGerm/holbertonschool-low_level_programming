#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * hash_table_create - Here we are creating a function to create a hash table
 * @size: size is our size of the table
 *
 * Return: We will be returning our hashtable
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t **hasharray;
	hash_table_t *hashtable;
	unsigned long int counter;

	hasharray = malloc(size * (sizeof(hash_node_t)));
	if (hasharray == NULL)
	{
		free(hasharray);
		return (NULL);
	}
	hashtable = malloc(sizeof(hash_table_t));
	if (hashtable == NULL)
	{
		free(hashtable);
		return (NULL);
	}
	for (counter = 0; counter < size; counter++)
	{
		hasharray[counter] = NULL;
	}
	hashtable->size = size;
	hashtable->array = hasharray;

	return (hashtable);
}
