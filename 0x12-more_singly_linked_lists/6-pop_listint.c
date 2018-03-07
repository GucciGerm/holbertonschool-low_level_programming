#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - Here our function will delete the head node
 * @head: The data structure we're accessing
 *
 * Return: The returning value
 */

int pop_listint(listint_t **head)
{
	int value = 1;
	listint_t *next = NULL;

	if (*head == NULL)
	{
		return (-1);
	}
	next = (*head)->next;
	value = (*head)->n;
	free(*head);
	*head = next;
	return (value);

}
