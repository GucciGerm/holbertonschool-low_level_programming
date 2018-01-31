#include "holberton.h"

/**
 * *_strcpy - Function that copies the string pointed by src
 * @src: The original string to copy
 * @des: The source to copy the string
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != 0; a++)
		dest[a] = src[a];
	dest[a] = 0;
	return (dest);
}
