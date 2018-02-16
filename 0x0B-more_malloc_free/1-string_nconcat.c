#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - Here we will be concatenating two strings
 * @s1: base string
 * @s2: string we're appending
 * @n: n would the limit
 *
 * Return: String or null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j, d, g, b;
	char *germ;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	for (j = 0; s1[j] != '\0'; j++)
		;
	for (d = 0; s2[d] != '\0'; d++)
		;
	if (n >= d)
	{
		germ = malloc(j + d + 1);
		if (germ == 0)
			return (0);
	}
	if (n < d)
	{
		germ = malloc(j + n + 1);
		if (germ == 0)
			return (0);
	}
	for (g = 0; g < j; g++)
		germ[g] = s1[g];

	for (b = 0; b < d && b < n; b++)
		germ[g + b] = s2[b];

	germ[g + b] = '\0';
	return (germ);
}
