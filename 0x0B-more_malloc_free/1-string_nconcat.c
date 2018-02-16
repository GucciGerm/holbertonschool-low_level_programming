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
	unsigned int j, i, d;
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
				s3[j] = s2[j];
			s3[j] = '\0';
		return (s3);
		}
	}
	for (j = 0; s1[j]; j++)
		;
	s3 = malloc(j + n + 1);
	if (s3 == 0)
		return (0);
	for (i = 0; s2[i]; i++)
		;
	for (j = 0; s1[j]; j++)
		s3[j] = s1[j];
	s3[j] = ' ';
	if (i > n)
		i = n;
	for (d = 0; d < i; d++, j++)
	{
		s3[j] = s2[d];
	}
	s3[j] = '\0';
	return (s3);

}
