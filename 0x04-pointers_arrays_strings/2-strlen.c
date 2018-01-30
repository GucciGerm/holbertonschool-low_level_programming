#include "holberton.h"

/**
 * _strlen - This function returns the length of a string
 * @s: Would be our string
 *
 * Return: The length of string
 */

int _strlen(char *s)
{
	int a;
	int b = 0;

	for (a = 0; s[b] != '\0'; ++a)
	{
		b++;
	}
	return (b);
}
