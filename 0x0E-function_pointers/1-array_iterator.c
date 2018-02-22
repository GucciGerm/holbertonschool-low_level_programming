#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Here our function will execute a fun givn as a parameter
 * @array: This is the array that we will input into our action
 * @action: This is pointing to array as a function pointer
 * @size: This is the size of the array
 *
 * Return: voided
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int bb = 0;

	if (action == NULL)
		return;
	if (array == NULL)
		return;
	while (bb < size)
	{
		action(array[bb]);
		bb++;
	}
}
