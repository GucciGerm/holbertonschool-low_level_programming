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
	int value; /*we have to return an integer*/
	listint_t *next = NULL;


	if (*head == NULL)
	{
		return (0);
	}
	next = (*head)->next; /*put the next ptr in next*/
	value = (*head)->n; /*get value from headlist from n*/
	free(*head); /*free that list*/
	*head = next;
	return (value);

}
