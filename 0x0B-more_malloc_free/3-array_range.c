#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - Here this function will create an array of integers
 * @min: is what we want to start point
 * @max: is what we want to end at
 *
 * Return: d
 */

int *array_range(int min, int max)
{
	int j;
	int g = 0;
	int *d;

	if (min > max)
		return (0);
	d = malloc(sizeof(int) * (max - min) + 1);
	{
		if (d == NULL)
			return (NULL);
	}
	for (j = 0; j <= max; j++)
	{
		d[g] = j;
		g++;
	}
	return (d);
}
