#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Here our function prints two numbers we've multiplied
 * @argc: the # of object files you've entered into the command line
 * @argv: our array that holds the string values of things
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{

		mul = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", mul);
	return (0);
	}
}
