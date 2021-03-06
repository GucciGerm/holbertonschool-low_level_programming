#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
#include <stdio.h>

/**
 * create_file - Here our function will create a file
 * @text_content: text content is a null terminated string
 * @filename: file name is the name of our file to create
 *
 * Return: 1 on success, -1 on a failure (no file creation,cant be written
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int length;

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0400 | 0200);
	if (fd == -1) /*you want to do this if to check fd equal to -1*/
		return (-1);
	/*O_CREAT - use o-creat to creates files */
	/*O_RDWR - use o-rdwr to make the file read and write usable*/
	/*O_TRUNC - use trunc to cut down the head of the file*/
	/*0400 - also known as S_IRUSR used to make readable permissions*/
	/*0200 - also known as S_IWUSR used to make writable permissions*/

	if (filename == NULL) /* Fail case, you want to return -1*/
		return (-1);

	if (text_content == NULL) /* Fail case, if text_content is NULL*/
	{
		text_content = ""; /*just nothing/empty "" */
		close(fd);
		return (1);
	}

	for (length = 0; text_content[length];)
	{
		/*text_content not equal to null byte add to length!!*/
		length++;
	}

	/* our write function below */

	fd = write(fd, text_content, length);
	if (fd == -1) /*return -1 if it fails (:< */
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);

}
