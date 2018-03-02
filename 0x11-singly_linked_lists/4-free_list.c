#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include "string.h"

/**
 * free_list - Here our function is freeing our "list_t" list
 * @head: Head is our "list_t"
 *
 */

void free_list(list_t *head)
{
	list_t *placeholder = head;

	while (head != NULL)
	{
		placeholder = head->next;
		free(head->str);
		free(head);
		head = placeholder;
	}
}
