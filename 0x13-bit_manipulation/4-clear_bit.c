#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

/**
 * clear_bit - Here our function sets the value of a bit to 0 at any given num
 * @index: index is the way we're moving through binary format
 * @n: n is an unsigned long integer pointer, it holds numbers
 *
 * Return: return -1 if error or 1 if success (:
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int mask = 1; /*binary num for conversion */

	mask = mask << index; /* moving the numbers over with shift << */
	if (index > sizeof(n) * 8)
		return (-1);
	mask = ~mask; /* using ~ to flip value*/
	*n = (*n & mask); /*setting the ptr val of n to */
	return (1);

/* right to left with index */
	/* index is how you move through binary number */
}
