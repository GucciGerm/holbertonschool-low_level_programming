#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - Here will insert a new node at a given position
 * @h: Here h is the beginning of our list
 * @n: Here n is the data from our structure
 * @idx: Here idx is the index of the list where the node will be added
 *
 * Return: NULL if it failed or the address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *mover = NULL;
	dlistint_t *newnode = NULL;
	unsigned int elementadd = 0; /* Set the count to 0 */

	if (*h == NULL || idx == 0)
		return (add_dnodeint(h, n));

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->next = NULL;
	newnode->prev = NULL;
	newnode->n = n;

	mover = *h;

	while (mover)
	{
		if (elementadd + 1 == idx)
		{
			if (mover->next)
			{
				newnode->next = mover->next;
				newnode->next->prev = newnode;
				newnode->prev = mover;
				mover->next = newnode;
			}
			else
			{
				mover->next = newnode;
				newnode->prev = mover;
			}
			return (newnode);
		}
		elementadd++; /* add one til reaches index */
		mover = mover->next; /* move to next til null */
	}
	return (NULL);
}
