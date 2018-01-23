#include "holberton.h"

/**
 * _abs - Function will compute the absolute value of an integer
 *@x: Random number
 *
 */

int _abs(int x)
{
	if (x < 0)
	{	x = (x * -1);
		_putchar(x);
	}
	return (0);
}
