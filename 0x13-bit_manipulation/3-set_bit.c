#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

/**
 * set_bit - Here our function will set that value of bit to 1
 * @n: n is our ptr
 * @index: index is our index of our numbers
 *
 * Return: return 1, -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1; /*set my mask to to the value of a bit 1*/

	if (index > (sizeof(*n) * 8)) /* *n value of ptr n*/
		return (-1); /* will return an error*/
		mask = mask << index;
		*n = (*n | mask);
		return (1);

	/*bit mask is looking for a bit*/
}
