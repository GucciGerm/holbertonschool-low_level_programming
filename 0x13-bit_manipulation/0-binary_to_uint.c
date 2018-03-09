#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

/**
 * binary_to_uint - Here our function converts a binary num to an unsigned int
 * @b: is a pointer to a string of zer0 or 0ne
 *
 * Return: 0ne, Zer0, or NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int j;

	if (b == NULL)
		return (0);

	for (j = 0; *b; b++)
	{
		if (*b == '1')
			j = (j << 1) | 1;
		else if (*b == '0')
			j <<= 1;
		else
			return (0); /* because we want to return 0*/
	}
	return (j);
}
