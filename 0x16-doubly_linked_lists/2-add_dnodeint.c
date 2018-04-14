#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_dnodeint - Here we will add a new node at the beginning of a dll
 * @head: here head is pointing to the beginning of our node list
 * @n: here n is the data from our structure
 *
 * Return: NULL if it failed or the address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newestxnode = NULL;

	if (!head)
		return (NULL);
	/* above, is a fail check to see if the data input is empty */

	newestxnode = malloc(sizeof(dlistint_t));
	if (newestxnode == NULL)
		return (NULL);
	/* allocate space for the dll then do fail check */

	newestxnode->n = n; /*setting the data of the newest node to n */
	newestxnode->next = NULL;
	newestxnode->prev = NULL;

	if (!(*head))
	{
		*head = newestxnode;
		return (newestxnode);
	}

	(*head)->prev = newestxnode;
	newestxnode->next = *head;
	*head = newestxnode;
	return (newestxnode);
}
