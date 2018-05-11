#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * key_index - This function will return the index of our key
 * @key: is the key
 * @size: is the size of the array
 *
 * Return: We will be returning the index of our key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
