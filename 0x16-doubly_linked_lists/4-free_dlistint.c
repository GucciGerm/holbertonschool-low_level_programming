#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dlistint - Here we will free a doubly link list (:
 * @head: is our data from our dll
 *
 * Return: VOID
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *dblylinklist = NULL;

	if (head == NULL)
		return;
	/* above we are checking if the dblylinklist is empty */
	dblylinklist = head;
	while (dblylinklist != NULL)
	{
		dblylinklist = head->next;
		free(head);
		head = dblylinklist;
	}
}
