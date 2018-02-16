#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - Here we are allocating memory for an array using malloc
 * @nmemb: # of memory in our array
 * @size: be the size of the byte
 *
 * Return: g
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int j;
	char *g;

	if (nmemb == 0)
		return (0);
	if (size == 0)
		return (0);

	g = malloc(nmemb * size);
	if (g == 0)
		return (0);

	for (j = 0; j < nmemb * size; j++)
		g[j] = '\0';
	return (g);
}
