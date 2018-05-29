#include "sort.h"

/**
 * bubble_sort - Here we will sort an array of integers in ascending order
 * @array: This is the pointer to the first element within our array
 * @size: This is the size of our array
 *
 * Return: We want to return non because VOID
 */

void bubble_sort(int *array, size_t size)
{
	int temp = 0;
	int bool = 1;
	size_t i = 0;

	if (size < 2)
		return;
	if (array != NULL)
	{
		while (bool)
		{
			i = 0;
			bool = 0;
			while (i < size - 1)
			{
				if (array[i] > array[i + 1])
				{
					temp = array[i];
					array[i] = array[i + 1];
					array[i + 1] = temp;
					bool = 1;
					print_array(array, size);
				}
				i++;
			}
		}
	}
}
