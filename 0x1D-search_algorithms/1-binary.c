#include "search_algos.h"

/**
 * printvalues - This side tool will print the values on the within array
 *
 * @array: array is a pointer to the first element of array
 * @l: left side of array
 * @r: right side of an array
 *
 * Return: None, just print
 */

void printvalues(int *array, size_t l, size_t r)
{
	size_t i;

	i = l;

	printf("Searching in array: ");
	while (i < r)
	{
		printf("%d, ", array[i]);
		i++;
	}
	printf("%d\n", array[i]);
}

/**
 * binary_search - We will search for a val within sorted array w/ binarysearch
 *
 * @array: Array is a pointer to the 1sof the array to search in
 * @size: Size is the number of elements within the array
 * @value: Value is the value we are searching for
 *
 * Return: if no val in array or array is empty return -1, else return index
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t r = size - 1;
	size_t midpoint;

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		midpoint = (l + r) / 2;
		printvalues(array, l, r);

		if (array[midpoint] < value)
			l = midpoint + 1;
		else if (array[midpoint] > value)
			r = midpoint - 1;
		else
			return (midpoint);
	}
	return (-1);
}
