#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *str_concat - Here our function will concatenate two strings
 * @s1: is our base string
 * @s2: is our string we will be appending to the base
 *
 * Return: string
 */

char *str_concat(char *s1, char *s2)
{
	int j;
	int d;
	char *s3;
	int sum;

	for (j = 0; s1[j] != '\0'; j++)
		;
	for (d = 0; s2[d] != '\0'; d++)
		;

	sum = j + d + 1;
	s3 = malloc(sizeof(char) * sum);
	if (s3 == NULL)
		return (NULL);

	for (j = 0; s1[j] != '\0'; j++)
		s3[j] = s1[j];

	for (d = 0; s2[d] != '\0'; d++)
	{
		s3[j + d] = s2[d];
	}
	s3[j + d] = '\0';

	return (s3);
}
