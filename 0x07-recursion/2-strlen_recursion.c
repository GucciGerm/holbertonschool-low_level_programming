#include "holberton.h"

/**
 * _strlen_recursion - Here our function will return the length of a string
 * @s: s will be the string we will be altering
 *
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (_strlen_recursion(s + 1) + 1);
	return (0);
}
