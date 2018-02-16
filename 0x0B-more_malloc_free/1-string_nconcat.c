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
	unsigned int j;
	unsigned int d;
	char *s3;

	if (s1 == 0)
	{
		s3 = malloc(n + 1);
		if (s3 == 0)
			return (0);
		if (s2 == 0)
		{
			return (s3);
		}
		else
		{
			for (j = 0; n + 1; j++)
			{
				s3[j] = s2[j];
			}
		return (s3);
		}
	}
	for (j = 0; s1[j]; j++)
	{
		s3 = malloc(j + n + 1);
		if (s3 == 0)
			return (0);
	}
	for (j = 0; s1[j]; j++)
	{
		s3[j] = s1[j];
	}
	s3[j] = ' ';
	for (d = 0; d < n + 1; d++, j++)
	{
		s3[j] = s2[d];
	}
	return (s3);

}
