#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - function will store a different value every time you run this program
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	if (x > 5)
		printf("Last digit of %d is %d greater than 5\n", n, x);
	else if (x < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
		       n, x);
	else (x == 0)
		printf("Last digit of %d is %d and is 0\n", n, x);
	return (0);
}
