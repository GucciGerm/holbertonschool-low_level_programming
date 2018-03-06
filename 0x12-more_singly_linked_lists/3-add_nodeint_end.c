#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * *add_nodeint_end - Here our function will add a node to the end of list
 * @head: head is our node we're adding to the end of our list
 * @n: n is what contains our data
 *
 * Return: We want to return the address or a NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nodo; /*make our new node*/
	listint_t *lastnodo; /*our lastnodo takes the place of n to move*/

	nodo = malloc(sizeof(listint_t)); /*mallocating space*/
	if (nodo == NULL)
		return (NULL); /*we always want null at the end*/
	nodo->n = n;
	nodo->next = NULL;

	if (*head == NULL)
	{
		*head = nodo;
		return (nodo); /* if null set the head to the nodo, new node*/
	}

	lastnodo = *head; /*This allows our node to start the end*/
	for (; lastnodo->next != NULL;) /*go to end*/
		lastnodo = lastnodo->next;
	lastnodo->next = nodo;
	return (*head);
}
