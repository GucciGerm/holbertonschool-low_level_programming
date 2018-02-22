#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Here our function will print a name
 * @name: This will be the name we're trying to print
 * @f: is the function name!
 *
 * Return: voided
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == 0 || name == 0)
		return;
	(f)(name);
}
