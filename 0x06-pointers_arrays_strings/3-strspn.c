#include "holberton.h"

/**
 * _strspn - This function gets the length of a prefixed substring
 * @s: is our string we will be changing
 * @accept: is our prefix characters
 *
 * Return: i
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j;
	int d;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (d = 0; accept[d] != '\0'; d++)
		{
			if (s[j] == accept[d])
			{
				i++;
				break;
			}
		}
		if (accept[d] == '\0')
			return (i);
	}
	return (i);

}
