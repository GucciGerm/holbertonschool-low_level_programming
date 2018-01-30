#include "holberton.h"
int _putchar(char c)

/**
 * _puts - Function prints a string followed by new line to stdout
 * @str: The following string
 *
 */

void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
