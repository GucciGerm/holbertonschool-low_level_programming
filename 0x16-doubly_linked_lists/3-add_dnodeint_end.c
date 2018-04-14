#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_dnodeint_end - Here we will add a new node to the end of our dll
 * @head: here head is pointing to the end of our node list
 * @n: here n is the data from our structure
 *
 * Return: NULL if it failed or the address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *lastxnode = NULL;
	dlistint_t *last = *head;

	if (!head)
		return (NULL);
	/* above we are checking if head input data is empty */
	lastxnode = malloc(sizeof(dlistint_t));
	if (lastxnode == NULL)
		return (NULL);
	/* allocate space for lastxnode (: */

	lastxnode->n = n; /* setting the data pointing from lastxnode to n */
	lastxnode->next = NULL; /* we want next to be equal to null */

	if (!(*head))
	{
		lastxnode->prev = NULL;
		*head = lastxnode;
		return (lastxnode);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = lastxnode;
	lastxnode->prev = last;
	return (lastxnode);
}
