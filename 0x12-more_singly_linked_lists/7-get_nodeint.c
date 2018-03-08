#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * *get_nodeint_at_index - Here this function returns the nth node of list
 * @head: head is our data structure we're accessing from
 * @index: index is the index of the node starting at zero.
 *
 * Return: our list or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nodecount;

	for (nodecount = 0; nodecount < index; nodecount++)
	{
		if (head == NULL) /*To see if the head is empty*/
			return (NULL); /*fail it(fail case)*/
		head = head->next; /*making head go to next node till index*/
	}
	return (head); /*we're counting the index, so return the list*/
}
