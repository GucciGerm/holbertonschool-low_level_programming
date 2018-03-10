#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

/**
 * flip_bits - Here our function will return the # of bits need to flip bits
 * @n:n will be our first integer we'll be comparing bits from
 * @m:m will be our second integer we'll be comparing bits from
 *
 * Return: Count (how many bits are true)
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned int i;

	for (i = 64; i > 0; i--) /* traversing the size of an uli */
	{
		if (((n ^ m) >> i) & 1) /*shifting the xor of n^m */
			count++; /*count how many bits are true and equal to 1*/
         }
	return (count);
}
