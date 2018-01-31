#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - Function verses a string
 * @s: *s is the string we're pointing at
 *
 */

void rev_string(char *s)
{
	int length = 0, x, temp;

	while (s[length + 1] != 0)
		length++;
	for (x = 0; x <= length / 2; x++)
	{
		temp = s[x], s[x] = s[length - x];
		s[length - x] = temp;
	}
}
