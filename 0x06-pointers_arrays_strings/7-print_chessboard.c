#include "holberton.h"

/**
 * print_chessboard - This function will print out a chessboard
 * @a: is the array we will be using
 *
 */

void print_chessboard(char (*a)[8])
{
	int j;
	int d;

	for (j = 0; j < 8; j++)
	{
		for (d = 0; d < 8; d++)
			_putchar(a[j][d]);
	}
}
