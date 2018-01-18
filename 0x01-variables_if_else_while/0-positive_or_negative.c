#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** main - function will replace n with random number
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n < 0)
		printf("%d is negative", n);
	else
	{
		printf("%d is zero", n);
	}
	return (0);
}
