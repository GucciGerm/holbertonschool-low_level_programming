#include "holberton.h"

/**
 * *_memset - Function fills memory with a constant byte
 * @s: is our array
 * @b: is our number to replace within the array
 * @n: is the total amount of times you want to replace b
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
