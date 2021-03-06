#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * *add_nodeint - Here our function will add a node to the beginning of our lis
 * @head: Add node in the beginning of our list
 * @n: we will duplicate this string
 *
 * Return: we want to return the address
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nodeholder;

	nodeholder = malloc(sizeof(listint_t));
	if (nodeholder == NULL)
		return (NULL);

	nodeholder->n = n;
	nodeholder->next = *head;
	*head = nodeholder;
	return (*head);
}
