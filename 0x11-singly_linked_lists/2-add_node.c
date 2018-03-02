#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * *add_node - Adds new node to beginning of list.
 * @head: Add node in beginining of this list.
 * @str: We duplicate this string.
 *
 * Return: Address or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = *head;
	*head = newnode;
	return (*head);
}
