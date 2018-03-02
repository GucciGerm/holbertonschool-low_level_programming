#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Here our function will print all the elements of our list
 * @h: H will be representing our linked list variable
 *
 * Return: We will be returning our number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *ptr = h;
	size_t g;

	for (g = 0; ptr != NULL; g++)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
	}
	return (g);
}
