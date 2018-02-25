#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * _printchar - Here this function will print a character
 * @printallfun: This is the list we've created using va_list
 */
void _printchar(va_list printallfun)
{
	printf("%c", va_arg(printallfun, int));
}
/**
 * _printinteger - Here this function will print an integer
 * @printallfun: This is the list we've created using va_list
 */
void _printinteger(va_list printallfun)
{
	printf("%d", va_arg(printallfun, int));
}
/**
 * _printfloat - Here this function will print a float
 * @printallfun: This is the list we've created using va_list
 */
void _printfloat(va_list printallfun)
{
	printf("%f", va_arg(printallfun, double));
}
/**
 * _printstring - Here this function will print a string
 * @printallfun: This is the list we've created using va_list
 */
void _printstring(va_list printallfun)
{
	char *g;

	g = va_arg(printallfun, char *);
	if (g == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", g);
}
/**
 * print_all - Here this function will print all functions!
 * @format: This is the list of types of arguments passed to function
 */

void print_all(const char * const format, ...)
{
	va_list printallfun; /*have return as va_list*/
	int db, bd;
	char *sep; /*separator*/

	Label funlist[] = {
		{"c", _printchar},
		{"i", _printinteger},
		{"f", _printfloat},
		{"s", _printstring},
		{NULL, NULL} /* show you the end */
	};
	db = 0; /* use as index */
	bd = 0;

	va_start(printallfun, format); /*name of the list, precede ellipises*/
	sep = ""; /* seps value is ""*/
	while (format != NULL && format[bd] != '\0')
	{
		while (funlist[db].jd != NULL)/*pulling in struct list*/
		{
			if (format[bd] == *funlist[db].jd) /*check format*/
			{
				printf("%s", sep); /*you want to print space*/
				funlist[db].func(printallfun);
				sep = ", "; /*use ,_ for spacing*/
			}
			db++;
		}
		db = 0;
		bd++;
	}
	printf("\n");
	va_end(printallfun);
}
