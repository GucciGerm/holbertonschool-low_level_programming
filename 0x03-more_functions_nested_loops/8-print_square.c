#include "holberton.h"

/**
 * print_square - Function prints a square followed by a new line
 * @size: represents the size of the square
 *
 * Return: 0
 */

void print_square(int size)

{
	int a;
	int b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
