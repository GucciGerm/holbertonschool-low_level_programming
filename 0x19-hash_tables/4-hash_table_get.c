#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * hash_table_get - Here this function will retrieve the value associated w/key
 * @ht: is the hash table you wan to look into
 * @key: key is the key you are looking for
 *
 *
 * Return: Returns a char the value associated w/ key or NULL if no key found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *tempnode;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);
	tempnode = ht->array[idx];

	while (tempnode != NULL)
	{
		if (strcmp(tempnode->key, key) == 0)
		{
			return (tempnode->value);
		}
		tempnode = tempnode->next;
	}
	if (tempnode == NULL)
		return (NULL);
	return (NULL);
}
