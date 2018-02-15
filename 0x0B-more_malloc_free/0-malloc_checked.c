#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - Here our function will allocate memory using malloc
 * @b: is the given unsigned int
 *
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	char *j;

	j = malloc(b);
	{
		if (j == 0)
			exit(98);
	}
	return (j);
}
