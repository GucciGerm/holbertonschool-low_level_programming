#include "holberton.h"

/**
 * _print_sign - Function will print the sign of a number
 * @n: n is our current int
 *
 * Return: 1,0,-1
 */

int print_sign(int n)
{

	if (n > 0)
		_putchar('+');
	else if (n < 0)
		_putchar('-');
	else
		_putchar('0');
	return (0);
}
