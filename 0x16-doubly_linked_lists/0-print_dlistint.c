#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dlistint - Will print all the elements of our dlistint_t list
 * @h: h is our doubly linked list variable
 *
 *
 * Return: You want to return the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodecount = 0; /* nodecount is what helps us count our nodes */
	dlistint_t *dllist = NULL;

	if (h == NULL)
		return (0);

	dllist = h->next;
	printf("%d\n", h->n);
	nodecount++; /* add one to our node count */

	while (dllist)
	{
		printf("%d\n", dllist->n);
		nodecount++; /* add another to node count */
		dllist = dllist->next;
	}
	return (nodecount); /* return the number of nodes */
}
