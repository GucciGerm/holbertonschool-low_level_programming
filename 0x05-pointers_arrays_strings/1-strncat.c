#include "holberton.h"

/**
 * _strncat - This function concatenates two of the strings we have provided
 * @src: is our string we will be adding with dest
 * @dest: is our second string
 * @n: is the limit we cannot surpass
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int j;
	int d;

	for (j = 0; dest[j] != '\0'; j++)
		;
	for (d = 0; src[d] != '\0' && d < n; d++)
	{
		dest[j + d] = src[d];
	}
	return (dest);
}
