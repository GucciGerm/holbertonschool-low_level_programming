#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_dnodeint_at_index - Here we will return the node at the index 0f dll
 * @head: Here is the beginnning of our linked list
 * @index: Here is where the node is positioned
 *
 * Return: if the does not exist return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *listed = NULL;
	unsigned int position = 0; /* we want our position to start at 0 */

	listed = head;
	while (listed != NULL)
	{
		if (position == index)
			return (listed);
		position++;
		listed = listed->next;
	}
	return (NULL);
}
