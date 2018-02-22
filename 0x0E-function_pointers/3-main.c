#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Here our function will calculates two integers together
 * @argc: This is our argument count
 * @argv: This is our argument for strings
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*' && *argv[2]
	    != '/' && *argv[2] != '%') || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if (atoi(argv[3]) == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100); /*[3] is the third argument*/
	}
	printf("%d\n", (get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3])));
	return (0); /*call getop bcz has what we need */
}
