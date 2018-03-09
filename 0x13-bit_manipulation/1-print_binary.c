#include "holberton.h"
#include <stdio.h>

/**
 * print_binary - Here our function prints the binary format of a num
 * @n: n what we're converting from decimal to binary format
 *
 * Return: No return.
 */

void print_binary(unsigned long int n)
{
	char crtbin;

	if (n == 0) /*if num = 0, print 0 then return*/
	{
		_putchar('0');
		return;
	}

	if (n == 1) /*if num = 1, print 1 then return*/
	{
		_putchar('1');
		return;
	}

	crtbin = (n & 1); /*n&1 converts into binary*/
	print_binary(n >> 1); /* loop through with recursion shifting right */
	_putchar(crtbin + '0'); /*converting into char*/
}
