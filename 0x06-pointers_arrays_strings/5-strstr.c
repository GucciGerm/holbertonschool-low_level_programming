#include "holberton.h"

/**
 * *_strstr - Our function will locate a substring
 * @haystack: is the string we will be counting
 * @needle: is the string we are looking for
 *
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; )
		{
			if (haystack[i] == needle[j])
			{
				j++;
				i++;
			}
			else
				break;

		}
		if (needle[j] == '\0')
			return (&haystack[i - j]);
	}
	return (0);
}
