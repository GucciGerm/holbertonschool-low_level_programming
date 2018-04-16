#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_dnodeint_at_index - Here we will delete the node at the index of dll
 * @head: Here head is the beginning of our dll
 * @index: is the index of the node that should be deleted, starts at 0
 *
 *
 *
 * Return: -1 if it failed or 1 if it succeeded (:
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *mover = NULL;
	unsigned int elementcount = 0;

	if (head == NULL)
		return (-1);
	/*above is a fail check to see if head is empty return -1*/
	mover = *head;
	while (mover != NULL)
	{
		if (elementcount == index)
		{
			if (mover->prev)
				mover->prev->next = mover->next;
			if (mover->next)
				mover->next->prev = mover->prev;
			if (index == 0)
			{
				if (mover->next)
					*head = mover->next;
				else
					*head = NULL;
			}
			free(mover);
			return (1);
			/* for success return 1 (: */
		}
		elementcount++;
		/* setting mover to the next node, move it move it */
		mover = mover->next;
	}
	/* if failed return -1 ): */
	return (-1);
}
