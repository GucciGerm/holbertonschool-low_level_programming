#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - Here our fuction will count the num of elements in linked list
 * @h: H is the representation of our list
 * Return: the g or count of elements
 */

size_t list_len(const list_t *h)
{
	const list_t *ptr = h;
	int g;

	for (g = 0; ptr != NULL; g++)
	{
		ptr = ptr->next;
	}
	return (g);
}
