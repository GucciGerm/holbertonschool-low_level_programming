#include "holberton.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times in lowercase
 *
 *
 */

void print_alphabet_x10(void)

{
	int a = 'a';
	int c = 0;

	while (c <= 9)

	{
	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
	a = 'a';
	c++;
	}
}
