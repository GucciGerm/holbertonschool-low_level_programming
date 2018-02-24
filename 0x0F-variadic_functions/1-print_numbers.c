#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - Here our function will print prints and a new line
 * @separator: this separator is the string being passed to the fun
 * @n: this n is the # of arguments we're inputing into code
 *
 * Return: VOID
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numnew;
	unsigned int shoku;

	va_start(numnew, n);
	if (separator == NULL) /* if separator is null dont print*/
		return;

	for (shoku = 0; shoku < n; shoku++) /*forloop to count the #ofargpass */
	{
		printf("%d", va_arg(numnew, int));

		if (shoku < n - 1)
			printf("%s", separator); /* will subtract to be lessn*/
	}
	printf("\n");
	va_end(numnew); /*we didn't need to return since r prototype is void*/
}
