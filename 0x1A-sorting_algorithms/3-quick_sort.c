#include "sort.h"

/**
 * partition - Here we will separate our array into two sects
 * @array: This is our array we are altering
 * @lo: This is the beginning of our low index
 * @hi: This is the last index
 * @size: This is the size of the array
 *
 * Return: We will return the index shifting
 */

int partition(int *array, int lo, int hi, size_t size)
{
	int pivot, i, j, temp;

	pivot = array[hi];
	i = lo - 1;

	for (j = lo; j < hi; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;

			if (i != j)
				print_array(array, size);
		}
	}
	temp = array[i + 1];
	array[i + 1] = array[hi];
	array[hi] = temp;
	if (i + 1 != hi)
		print_array(array, size);
	return (i + 1);
}


/**
 * sort - Here we are goin to sort our array into low and high sects
 * @array_int: This is an array of integers
 * @low: This is the beginning of the low index
 * @high: This is the last index of array, Highest!
 * @size: This is the size of the array
 *
 * Return: Void
 */

void sort(int *array_int, int low, int high, size_t size)
{
	int p;

	if (low < high)
	{
		p = partition(array_int, low, high, size);
		sort(array_int, low, p - 1, size);
		sort(array_int, p + 1, high, size);
	}
}

/**
 * quick_sort - Here we will be using the quick sort
 * @array: This is our array we are altering
 * @size: This is the size of our array
 *
 * Return: Void
 */

void quick_sort(int *array, size_t size)
{
	int low = 0;
	int high = 0;

	if (array == NULL)
		return;

	high = size - 1;

	sort(array, low, high, size);
}
