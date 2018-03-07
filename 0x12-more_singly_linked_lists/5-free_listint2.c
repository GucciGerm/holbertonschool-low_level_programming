#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - Here our function will free our list!!
 * @head: head is our data structure we're freeing
 *
 * Return: None
 */

void free_listint2(listint_t **head)
{
	listint_t *placeholder; /*remember space for declaration*/

	if (head == NULL) /*we want to set the head to null*/
		return;

	while (*head != NULL) /*for better practice use while loop for lists*/
	{
		placeholder = *head;
		*head = (*head)->next;
		free(placeholder);
	}
}
