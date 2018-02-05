#include "holberton.h"

/**
 * *_memcpy - This function copies memory area
 * @dest: the string we are copying to
 * @src: the string we are copying from
 * @n: n is the limit
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int g;
	unsigned int j;

	for (g = 0; g < n; g++)
	{
		j = src[g];
		dest[g] = j;
	}
	return (dest);
}
