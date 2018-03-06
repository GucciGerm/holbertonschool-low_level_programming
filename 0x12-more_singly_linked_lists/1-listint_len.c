#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - Here our function will count the num of elements in our linked
 * @h: H is the representation of our list
 *
 * Return: the count of elements
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = h;
	int count;

	for (count = 0; ptr != NULL; count++)
	{
		ptr = ptr->next;
	}
	return (count);
}
