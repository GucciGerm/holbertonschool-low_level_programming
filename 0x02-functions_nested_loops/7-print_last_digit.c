#include "holberton.h"

/**
 * print_last_digit - This function prints the last digit of a number
 *
 * Return: x
 */

int print_last_digit(int x)
{
	x = x % 10;
	if (x < 0)
	{
		x = (x * -1);
		_putchar(x + '0');
		}
	return (x);
}
