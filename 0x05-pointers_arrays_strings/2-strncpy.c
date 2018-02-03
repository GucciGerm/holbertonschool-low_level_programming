#include "holberton.h"

/**
 * *_strncpy - This function allows you to copy a string
 * @src: string we're coping from
 * @dest: string we're coping to
 * @n: our limit
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;
	int d;

	for (j = 0; dest[j] != '\0'; j++)
		;
	for (d = 0; d < n && src[d] != '\0' ; d++)
	{
		dest[d] = src[d];
	}
	while (d < n)
	{
		dest[d] = '\0';
		d++;
	}
	return (dest);
}
