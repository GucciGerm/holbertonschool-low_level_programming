#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
#include <stdio.h>

/**
 * append_text_to_file - This function will attach text to end of created file
 * @text_content: text content is the NULL terminate string to add to end
 * @filename: filename is just the name of the file
 *
 * Return: 1 on a success, -1 on a failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int counter; /*how we get our length*/

	fd = open(filename, O_RDWR | O_APPEND, 0400 | 0200);
	if (fd == -1)
		return (-1); /* to close if -1, failure */

	/*O_APPEND - use o-append to append given files */
	/*O_RDWR - use o-rdwr to make the file read and write usable*/
	/*0400 - also known as S_IRUSR used to make readable permissions*/
	/*0200 - also known as S_IWUSR used to make writable permissions*/

	if (filename == NULL) /*edgecase to check if filename is empty */
		return (-1);

	if (text_content == NULL) /*check if null termincated string is empty*/
		text_content = ""; /*setting text_content to empty*/

	for (counter = 0; text_content[counter]; counter++)
		;
	/*access the pointer text_content using counter*/
	fd = write(fd, text_content, counter);
	if (fd == -1) /*return -1 if it fails ):< */
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
