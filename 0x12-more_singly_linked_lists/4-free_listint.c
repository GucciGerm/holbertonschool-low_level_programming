#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * free_listint - Here our function will free a list!
 * @head: head is our list we're accessing
 *
 * Return: None
 */

void free_listint(listint_t *head)
{
	listint_t *placeholder; /*using a structure from list*/

	for (; head != NULL;)
	{
		placeholder = head; /*we want to free after we input into h*/
		head = head->next;/*we want to pnt to the next*/
		free(placeholder);
	}
}
