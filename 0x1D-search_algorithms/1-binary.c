#include "search_algos.h"

/**
 * binarySearch - This script is a tool called binarysearch will search
 * @array: is the pointer to the first element
 * @l: left halve of array
 * @r: right halve of array
 * @value: Value is the the tart value we're looking for
 *
 * Return: This will return a -1 if no val, else return the index
 */

int binarySearch(int *array, size_t l, size_t r, int value)
{
	size_t midpoint;
	size_t i = l;
	char delimeter = 0;


	while (l <= r)
	{
		midpoint = (l + r) / 2;
		printf("Searching in array:");
		while (i <= r)
		{
			printf("%c %d", delimeter, array[i]);
			delimeter = ',';
			i++;
		}
		printf("\n");
		if (array[midpoint] == value)
			return (midpoint);
		if (array[midpoint] < value)
			return (binarySearch(array, midpoint + 1, r, value));
		else
			return (binarySearch(array, l, midpoint - 1, value));
	}
	return (-1);
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
	int index;

	if (array == NULL)
		return (-1);

	index = binarySearch(array, 0, size - 1, value);
	return (index);
}
