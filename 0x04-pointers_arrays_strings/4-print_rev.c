#include "holberton.h"

/**
 * print_rev - Function prints a string in reverse
 * @s: String printed in reverse
 *
 */

void print_rev(char *s)
{
	int a = 0;

	while (s[a] != 0)
		a++;
	for (a--; a >= 0; a--)
		_putchar(s[a]);
	_putchar('\n');
}
