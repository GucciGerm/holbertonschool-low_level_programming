#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Here our function prints all arguments it recieves
 * @argc: the @ of object files you've entered into the command line
 * @argv: our array that holds the string of values of things
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
		printf("%s\n", argv[j]);
	return (0);
}
