#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * hash_table_set - Here this function will add an element to the hash table
 * @ht: is the hash table you will want to add or update the key/value to
 * @key: is the key. Key cannot be an empty string
 * @value: is the value associated with the key. Value can be an empty string
 *
 * Return: Return an int 1 if succeeded, or 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new_node;
	hash_node_t *pointer;

	new_node = malloc(sizeof(hash_node_t *));
	if (new_node == NULL || ht == NULL || key == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	pointer = ht->array[idx];

	while (pointer != NULL)
	{
		if (strcmp(pointer->key, key) == 0)
		{
			free(pointer->value);
			pointer->value = strdup(value);
			return (1); /* success */

		}
		pointer = pointer->next;
	}

	new_node->value = strdup(value);
	new_node->key = strdup(key);

	if (ht->array[idx] != NULL) /* look to see if in index */
	{
		new_node->next = ht->array[idx];
		return (1);
	}
	else
		new_node->next = NULL; /* set the next node to null */
	ht->array[idx] = new_node;
	return (1); /* success */
}
