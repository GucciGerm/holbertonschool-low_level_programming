#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - function replaces the n with a random number
 *
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d,n is positive\n", n);
	else if (n < 0)
		printf("%d,n is negative\n", n);
	else
		printf("%d,n is zero\n", n);
	return (0);
}
