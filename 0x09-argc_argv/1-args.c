#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Here our function prints the number of arguments passed into it
 * @argc: the # of object files you've entered into the command line
 * @argv: our array that holds the string values of things
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void) argv;
	return (0);
}
