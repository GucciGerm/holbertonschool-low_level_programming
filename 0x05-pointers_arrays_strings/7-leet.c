#include "holberton.h"

/**
 * *leet - This function encodes a string to leet/1337
 * @s: This is our string we are into 1337
 *
 * Return: our string s
 */

char *leet(char *s)
{
	char *alpha = "aeotlAEOTL";
	char *integer = "4307143071";
	int j;
	int d;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (d = 0; alpha[d] != '\0'; d++)
		{
			if (s[j] == alpha[d])
				s[j] = integer[d];
		}
	}
	return (s);
}
