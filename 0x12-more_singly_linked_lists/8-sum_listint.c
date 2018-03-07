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
	int sum = 0; /*don't forget the space after declarations*/

	while (head != NULL)
	{
		sum += head->n; /*sum comes from the head pulling the (n)data*/
		head = head->next;

	}
	return (sum);
}
