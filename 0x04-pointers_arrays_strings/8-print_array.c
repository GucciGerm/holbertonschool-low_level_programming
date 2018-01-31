#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Function prints n elements of an array of integers
 * @a: This is our array
 * @n: n of elements of an array
 *
 */

void print_array(int *a, int n)
{
	int g;

	for (g = 0; g < n; g++)
	{
		printf("%d", a[g]);
		if (g < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
