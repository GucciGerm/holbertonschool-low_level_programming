#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - Here our function will find of its parameters given
 * @n: This is the number of arguments you're inputing into function
 *
 * Return: SUM
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list doggo;
	unsigned int goku, sum;

	va_start(doggo, n); /* start at the start of the argument*/
	if (n == 0)
		return (0);

	sum = 0;
	for (goku = 0; goku < n; goku++)
		sum += va_arg(doggo, int);
	va_end(doggo); /*basically our free command*/
	return (sum);
}
