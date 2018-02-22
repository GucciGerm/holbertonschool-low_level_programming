#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Here our function will search for an integer
 * @array: This will be the pointer to our array
 * @cmp: This the pointer to a function to be used when comparing vals
 * @size: This will be our number of elements within the array
 *
 * Return: Void!!
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int jd;
	int bb;

	if (size <= 0)
		return (-1);
	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	for (jd = 0; jd < size; jd++)
	{
		bb = cmp(array[jd]);
		if (bb != 0)
			return (jd);
	}
	return (-1);
}
