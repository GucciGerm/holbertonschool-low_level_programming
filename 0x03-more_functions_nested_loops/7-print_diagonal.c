#include "holberton.h"

/**
 * print_diagonal - Function draws a diagonal line on the terminal
 * @n: is the number of times the character \ should be printed
 *
 */

void print_diagonal(int n)

{
	int a;
	int b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
				for (b = 0; b < a; b++)
				{
					_putchar(' ');
				}
				_putchar('\\');
				_putchar('\n');
		       	}
	}
	else
	{
		_putchar('\n');
	}
}
