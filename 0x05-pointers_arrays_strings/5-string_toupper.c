#include "holberton.h"

/**
 * *string_toupper - Function replaces strings lowercase letters to uppercase
 * @s: this would be our string array
 *
 * Return: s
 */

char *string_toupper(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] >= 'a' && s[j] <= 'z')
			s[j] -= 32;
	}
	return (s);
}
