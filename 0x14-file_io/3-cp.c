#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "holberton.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

/* Below are helper functions that returns a specific error & exit */

/**
 * error_98 - Here our function will return an error at exit 98
 * @fd: fd is our file descriptor
 *
 *
 */

void error_98(char *fd)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fd);
	exit(98);
}

/**
 * error_99 - Here our function will return an error at exit 99
 * @fd: fd is our file descriptor
 *
 */

void error_99(char *fd)
{
	dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", fd);
	exit(99);
}

/**
 * error_100 - Here our function will return an error at exit 100
 * @fd: fd is our file descriptor
 *
 */

void error_100(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/* Below is the main function which is to cpy contents from file01 to file02 */

/**
 * main - Here our function will copy the contents from file01 to file02
 * @argc:argc is how many arguments we're taking in hence "agrument count"
 * @argv:argv is the a one-dimensional array of strings hence "argument vector"
 *
 * Return: 0 for success (:
 */

int main(int argc, char *argv[])
{
	int file01, file02, read_file = 0, write_file, close_file;
	char *buffer[1024];

	if (argc != 3) /*3 because we want to exactly 2 inputs*/
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97); /*edgecase*/
	}
	/* to open file */
	file01 = open(argv[1], O_RDONLY);
	if (file01 == -1)
		error_98(argv[1]);
	file02 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file02 == -1)
		error_98(argv[2]);
	/* to read and write */
	while (read_file > 0)
	{
		read_file = read(file01, buffer, 1024);
		if (read_file == -1)
		{
			error_98(argv[1]);
		}
		write_file = write(file02, buffer, read_file);
	/* Use "read_file" within write fun to optimizes code so you dont */
	/* need to use a new int */
		if (write_file == -1)
		{
			error_99(argv[2]);
		}
	}
	/* to close file */
	close_file = close(file01);
	if (close_file == -1)
		error_100(file01);
	close_file = close(file02);
	if (close_file == -1)
		error_100(file02);
	return (0);
}
