#include <holberton.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int putchar(char ch)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
