#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
#include <stdio.h>

/**
 * read_textfile - Here our function will read a text file and print posix
 * @letters: letters is the number of letters that should be read and print
 * @filename: filename is our pointer to our "filename"
 *
 * Return: actual number of letters or zer0 or -1
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t length; /*for assigning our total length*/

	/* mallocating space */
	buffer = malloc(sizeof(char) * letters + 1);

	if (buffer == NULL)
	{
		return (0);
	}

	if (filename == NULL)
		return (0);
	/* for reading */
	fd = open(filename, O_RDONLY, 0400);

	if (fd == -1)
		return (0);

	length = read(fd, buffer, letters); /*use buffer 2 count letters*/
	buffer[letters] = '\0';
	close(fd);

	/* for writing */


	fd = write(STDOUT_FILENO, buffer, length);
	if (fd == -1)
	{
		free(buffer);
		return (-1);
	}

	free(buffer);
	return (length);
}
