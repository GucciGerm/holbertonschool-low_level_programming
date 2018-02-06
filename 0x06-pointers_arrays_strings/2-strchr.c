#include "holberton.h"

/**
 * *_strchr - This function locates a character in a string
 * @s: Our string we are locating character from
 * @c: is our limitor
 *
 * Return: 0 or s+j
 */

char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; j < c; j++)
	{
		if (s[j] == c)
			return (s + j);
	}
	return (0);
}
