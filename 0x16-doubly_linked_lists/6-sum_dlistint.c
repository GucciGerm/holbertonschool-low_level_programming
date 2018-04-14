#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_dlistint - Here we will sum all of the data(n) of our dll
 * @head: Here head is the beginning of our list
 *
 *
 * Return: 0 if empty or sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *list = NULL;
	int total = 0; /* set the value of total to 0 to start at 0 (: */

	/* Do a check to account for if the input sum is empty */
	if (head == NULL)
		return (0); /* if the list is empty return 0 */

	list = head;
	while (list != NULL)
	{
		total += list->n; /* here we are adding to our total */
		list = list->next;
	}
	return (total);
}
