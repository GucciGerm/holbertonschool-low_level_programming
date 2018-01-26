#include "holberton.h"

/**
 * print_triangle - Function prints a triangle followed by a new line
 * @size: Represents the size of the triangle
 *
 */

void print_triangle(int size)
{
	int a;
	int b;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b= 1; b <= size; b++)
			{
				if (b < size - a)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
