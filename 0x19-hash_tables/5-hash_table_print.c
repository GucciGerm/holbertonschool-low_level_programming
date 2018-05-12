#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * hash_table_print - This function will print a hashtable
 * @ht: ht is the hashtable
 *
 * Return: print the key/val in order they appear in the array of hashtable
 */

void hash_table_print(const hash_table_t *ht)
{

	unsigned long int idx = 0; /* start from the order they appear */
	hash_node_t *hashtable;
	int numofelements = 0;

	if (ht == NULL)
		return;
	printf("{");
	while (idx < ht->size)
	{
		hashtable = ht->array[idx];
		while (hashtable != NULL)
		{
			if (numofelements == 1)
				printf(",'%s': '%s'", hashtable->key,
				       hashtable->value);
			else
				printf("'%s': '%s'", hashtable->key,
				       hashtable->value);
			numofelements = 1;
			hashtable = hashtable->next;
		}
		idx++; /* count through the hash table using index */
	}
	printf("}\n");

}
