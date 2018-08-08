#include "search_algos.h"

/**
 * linear_search - This script will search for val in array using lsa
 *
 * @array: This is a pointer to the first element of the array to search
 * @size: This is the size of the number of elements within array
 * @value: Value will be the value we're searching for
 *
 * Return: We will be returning an integer or return -1 if false
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);

}
