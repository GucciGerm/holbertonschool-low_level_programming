#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - Here our function returns a pointer to a 2 dimensional array
 * @width: this would be our width of the grid
 * @height: this would be our height of the grid
 *
 * Return: String or Null
 */

int **alloc_grid(int width, int height)
{
	int j;
	int d;
	int **ptr;

	if (width <= 0)
		return (0);
	if (height <= 0)
		return (0);
	ptr = malloc(sizeof(int) * height);

	if (ptr == 0)
		return (0);
	for (j = 0; j < height; j++)
		ptr = malloc(sizeof(int) * width);
	if (ptr == 0)
		return (0);
	for (d = 0; d < width; d++)
	{
		ptr[d] = malloc(sizeof(int) * width);
	if (ptr[d] == 0)
		return (0);
	}
	for (j = 0; j < d; j++)
	{
		free(ptr);
	}
	return (0);
}
