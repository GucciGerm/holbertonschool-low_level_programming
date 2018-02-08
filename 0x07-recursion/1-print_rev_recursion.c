#include "holberton.h"

/**
 * _print_rev_recursion - Here our function will print a string in reverse
 * @s: is our string we will be altering
 *
 *
 */

void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar (*s);
	}
}
