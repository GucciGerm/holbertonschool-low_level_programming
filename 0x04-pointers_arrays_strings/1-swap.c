#include "holberton.h"

/**
 * swap_int - Function swaps the values of two integers
 * @a: First Parameter
 * @b: Second Parameter
 *
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
