#include "holberton.h"

/**
 * print_numbers - prints number from 0-9 followed by new line
 *
 *
 */

void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)

	{
		_putchar(a);
	}
	_putchar('\n');
}
