#include "holberton.h"

/**
 * *_strcat - strcat function adds two strings
 * @dest: dest is the string we are removing the null and adding string
 * @src: src is the string we are concatenating to the dest string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int g;
	int b;

	for (g = 0; dest[g] != '\0'; g++)
		;
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[g + b] = src[b];
	}
	return (dest);
}
