#include "holberton.h"

/**
 * _isdigit - Function checks for digit 0-9
 * @c: c is a digit that we are going to check
 *
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
	{
		return (1);
	}
		return (0);
}
