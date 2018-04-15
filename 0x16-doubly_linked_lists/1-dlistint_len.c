#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * dlistint_len - Here will return the number of elements in the linked list
 * @h: is our doubly linked list variable
 *
 *
 * Return: The number of elements within the dlistint_t list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t elementcount = 0;
	dlistint_t *doublylinklist = NULL;

	if (h == NULL)
		return (0);
	/* including fail check to see if empty */

	doublylinklist = h->next;
	elementcount++;

	while (doublylinklist)
	{

		elementcount++;
		doublylinklist = doublylinklist->next;
		/* setting the dll to the next node */
	}
	return (elementcount);
}
