#include "holberton.h"

/**
 * more_numbers - Function prints 10 times the numbers from 0-14
 *
 *
 */

void more_numbers(void)
{
	int a;

	for(a = '0'; a <= 14; a++)
       	{
       	_putchar('a' * 10);
	}
	_putchar('\n');

#include "holberton.h"

/**
 * more_numbers - Function prints 10 times the numbers from 0-14
 *
 * more_numbers: void
 */

void more_numbers(void);
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				_putchar(b / 10 + '0');
			}
			_putchar(b % 10 + '0');
		}
		_putchar('\n');
	}
}