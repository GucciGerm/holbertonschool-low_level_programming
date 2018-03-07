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
	listint_t *placeholder;

	placeholder = *head;
	placeholder = NULL;

	while (*head != NULL) /*for better practice use while loop for lists*/
	{
		placeholder = *head;
		*head = (*head)->next;
		free(placeholder);
	}
}
