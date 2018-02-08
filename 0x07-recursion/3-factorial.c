#include "holberton.h"

/**
 * factorial - This function will return the factorial of a given number
 * @n: n is our integer we change
 *
 * Return: -1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);

		return (n * factorial(n - 1));
}
