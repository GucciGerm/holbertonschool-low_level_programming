#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - Here our function will select the correct function to perform
 * @s: s will be the operator being passed into the program
 *
 * Return: Null
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL) /*will look to see if equal to null*/
	{
		if (ops[i].op[0] == *s) /*check if equal to s[0]*/
			return (ops[i].f); /*ops will point to our fun*/
		i++;
	}
	return (NULL);

}
