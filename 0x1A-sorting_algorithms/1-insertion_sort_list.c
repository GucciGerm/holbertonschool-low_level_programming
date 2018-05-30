#include "sort.h"

/**
 * swap - Here this function will swap the values and positions of our list
 * @position: This is where we are in located in the list
 * @node: This node we are accessing in our list
 *
 * Return: void it
 */

void swap(listint_t *position, listint_t *node)
{
	if (node->next == NULL)
	{
		node->prev->next = NULL;
	}
	if (node->prev == NULL)
	{
		node->next->prev = NULL;
	}
	if (node->next != NULL && node->prev != NULL)
	{
		node->prev->next = node->next;
		node->next->prev = node->prev;
	}
	if (position->prev == NULL)
	{
		node->prev = NULL;
		position->prev = node;
		node->next = position;
		position = node;
		return;
	}
	position->prev->next = node;
	node->prev = position->prev;
	node->next = position;
	position->prev = node;
}


/**
 * insertion_sort_list - Here we will sort a dblll of ints in ascending order
 * @list: This is the double pointer to our double link list
 *
 * Return: Void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *cursor_f, *cursor_b, *temp;
	int value = 0, count = 0;

	if (list == NULL || *list == NULL)
		return;

	cursor_f = *list;
	while (cursor_f != NULL)
	{
		count++;
		cursor_f = cursor_f->next;
	}
	if (count < 2)
		return;

	cursor_f = *list;
	while (cursor_f != NULL)
	{
		value = cursor_f->n;
		cursor_b = cursor_f;
		temp = cursor_f;

		while (cursor_b != NULL)
		{
			if (value < cursor_b->n)
			{
				if (cursor_b->prev == NULL)
				{
					swap(cursor_b, temp);
					*list = temp;
				}
				else
					swap(cursor_b, temp);
				print_list(*list);
			}
			cursor_b = cursor_b->prev;
		}
		cursor_f = cursor_f->next;
	}

}
