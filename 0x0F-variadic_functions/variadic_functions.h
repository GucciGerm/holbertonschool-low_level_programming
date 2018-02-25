#ifndef sumof
#define sumof
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * struct johno - Here this is our struct op
 * @jd: The operator
 * @func: The function that we are associating
 *
 */

typedef struct johno
{
	char *jd; /* call function from list*/
	void (*func)(va_list printallfun);
} Label; /* name of custom type */

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void _printchar(va_list printallfun);
void _printinteger(va_list printallfun);
void _printfloat(va_list printallfun);
void _printstring(va_list printallfun);
#endif
