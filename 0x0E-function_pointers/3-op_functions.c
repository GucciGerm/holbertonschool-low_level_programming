#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - Here we are going to be adding two integers
 * @a: This will be our first integer we're adding
 * @b: This will be our second integer we're adding
 *
 * Return: a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Here we are going to be finding the difference between two integers
 * @a: This will be our first integer we're subtracting
 * @b: This will be our second integer we're subtracting against
 *
 * Return: a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Here we are going to be multiplying to integers to get the product
 * @a: This will be our first integer we're multiplying
 * @b: This will be our second integer we're multiplying
 *
 * Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Here we are going to be dividing to integers to get the result
 * @a: This will be our first integer we're dividing from
 * @b: This will be our seconf integer we're diving from
 *
 * Return: a / b
 */

int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Here we are going to be finding the remainder after dividing
 * @a: This will be our first integer we're finding the remainder of
 * @b: This will be our second integer we're finding the remainer of
 *
 * Return: a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
