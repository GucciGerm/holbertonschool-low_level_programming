#include "holberton.h"

/**
 * _isupper - function checks for uppercase character
 * @c: This is the character to be checked
 *
 * Return: 1 if c is uppercase, if else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
