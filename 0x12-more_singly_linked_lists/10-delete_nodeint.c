#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - Here our fucntion deletes the node at index
 * @head: head is our data structure list
 * @index: index is how we are able to move through our nodes
 *
 * Return: a 1 is succeeded or a -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr; /*placeholder*/
	unsigned int g; /*to count our nodes until index node*/
	listint_t *j; /*j holds our head*/

	j = *head;

	if (head == NULL || *head == NULL) /* check for nulls */
		return (-1); /*if null return negative 1*/

	if (index == 0)
	{
		(*head) = (*head)->next;
		free(j);
		return (1); /*if it succeeds then return 1*/
	}
	for (g = 0; g < index; g++) /* to delete the node at our index*/
	{
		if (j == NULL)
			return (-1); /*if it fails return -1*/
		j = j->next;
	}
	ptr = j->next->next;/*set ptr equal to the 2 next nodes of j*/
	free(j->next);/*freeing the next ptr in j list*/
	j->next = ptr; /*put ptr into the new val of the next node of j list*/
	return (1); /*we have to return an integer + we want 1 to succeed */
}
