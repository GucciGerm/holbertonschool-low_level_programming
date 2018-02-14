#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - Here our function creates an array of chars w/specific char
 * @size: is one our integers
 * @c: character c will be what we will be changing
 *
 * Return: Null or 0
 */

char *create_array(unsigned int size, char c)
{
	char *j;
	unsigned int g;

	j = malloc(sizeof(char) * size);

	if (size == 0)
		return (0);

	if (j == 0)
		return (0);

	for (g = 0; g < size; g++)
		j[g] = c;
	j[g] += '\0';

	return (j);
}
