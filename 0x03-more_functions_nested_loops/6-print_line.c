#include "holberton.h"

/**
 * print_line - Function will draw a straight line in the terminal
 * @n: the number of times the _ will be printed
 *
 * Return: 0
 */

void print_line(int n)

{
	int a;

	if (!(n <= 0))
	{
		for (a = 0; a < n; a++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
