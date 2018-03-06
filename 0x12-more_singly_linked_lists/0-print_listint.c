#include <stdio.h>
#include <stdlib.h>
#include "lists.h" /*what we use to make lists*/

/**
 * print_listint - Here our function will be printing all elements of our list
 * @h: Here is our linked list variable
 *
 * Return: Here we want to be returning our number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t N0D0;

	for (N0D0 = 0; ptr != NULL; N0D0++)
	{
		if (ptr->n != '\0')
			printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (N0D0);
}
