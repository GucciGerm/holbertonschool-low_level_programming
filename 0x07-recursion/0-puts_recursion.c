#include "holberton.h"

/**
 * _puts_recursion - Here this function will be printing a string w/ new line
 * @s: is our string we will be altering
 *
 *
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		     _putchar('\n');
}
