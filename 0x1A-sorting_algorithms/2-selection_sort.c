#include "sort.h"

/**
 * selection_sort - Here this func will sort an array of ints in ascending
 * order
 * @array: This is the array we are altering
 * @size: This is the size of the array
 *
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t start = 0;
	int low = 0;
	size_t low_index = 0;
	int temp = 0;

	if (array == NULL || size < 2)
		return;

	while (start < size)
	{
		low = array[start];
		low_index = start; /* have to reset the low index location */
		i = 0;
		while ((i + start) < size)
		{
			if (array[i + start] < low)
			{
				low = array[start + i];
				low_index = start + i;
			}
			i++;
		}
		if (start != low_index)
		{
		temp = array[start];
		array[start] = array[low_index];
		array[low_index] = temp;
		print_array(array, size);
		}
		start++;
	}
}
