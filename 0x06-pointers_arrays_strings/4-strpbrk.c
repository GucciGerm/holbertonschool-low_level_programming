#include "holberton.h"

/**
 * *_strpbrk - This function searches a string for any set of bytes
 * @s: is our string
 * @accept: our letters we are filtering through
 *
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int j;
	int d;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (d = 0; accept[d] != '\0'; d++)
		{
			if (accept[d] == s[j])
				return (&s[j]);
		}
	}
	return (0);
}
