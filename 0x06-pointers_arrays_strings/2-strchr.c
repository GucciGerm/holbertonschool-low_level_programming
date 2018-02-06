#include "holberton.h"

/**
 * *_strchr - This function locates a character in a string
 * @s: Our string we are locating character from
 * @c: is our character
 *
 * Return: 0 or s+j
 */

char *_strchr(char *s, char c)
{
	int j;
	int d;

	for (d = 0; s[d] != '\0'; d++)
	{

		for (j = 0; j < s[d]; j++)
		{
			if (s[j] == c)
				return (s + j);
		}
	}
	return (0);
}
