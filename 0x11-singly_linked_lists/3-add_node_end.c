#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include "string.h"

/**
 * add_node_end - Here our function will add a node to the end of list_t
 * @head: Add to the end of our list
 * @str: Duplicate of our string
 *
 * Return: address or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(str);
	new->next = NULL;
	if (*head == NULL) /*You want to make it equal to your new node*/
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}
	return (new);
}
/**
 * _strlen - This function returns the length of a string
 * @s: Would be our string
 *
 * Return: The length of string
 */

int _strlen(const char *s)
{
	int a;
	int b = 0;

	for (a = 0; s[b] != '\0'; ++a)
	{
		b++;
	}
	return (b);
}
