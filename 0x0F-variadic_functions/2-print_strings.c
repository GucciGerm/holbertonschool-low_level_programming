#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - Here our function will print strings w/ new line
 * @separator: This is our commas
 * @n: This is our limit we are setting also our # of assignments
 *
 * Return: void return
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list listo; /* we are creating a list called listo*/
	unsigned int jg; /*will be our count*/
	char *db;

	va_start(listo, n); /*we are starting up our list*/
	if (separator == NULL)
		printf("%s", separator);

	for (jg = 0; jg < n; jg++)
	{
		db = va_arg(listo, char *);
		if (db == NULL)
		{
			printf("(nil)\n");
		}
		else
			printf("%s", db);
		if (jg < n - 1)
			printf("%s", separator);
	}
	printf("\n"); /*print new line*/
	va_end(listo); /*ending our list*/
}
