#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

/**
 * get_bit - Here our function will return a bit at an given index
 * @index: index is our bit that we want to return
 * @n: n is the decimal to get our bit
 *
 * Return: you'll be returning our bit or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	// This will work specifically for 64 bit machine (: //
	if (index > 63) /* index can go from 0-63 which is 64, account for 0 */
		return (-1); /* return -1 if it's larger than a 64 bit*/
	return ((n >> index) & 1); /*shift right to get our bit of index */

	// & 1 means to checks each place to see if its 1 or 0 //
	// using & 1 converts it into bits and not decimal //
}
