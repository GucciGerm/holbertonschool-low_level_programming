#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - Here our function will return the sum of all data(n)
 * @head: is the data structure we're accessing from
 *
 * Return: The sum
 */

int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;

	}
	return (sum);
}
