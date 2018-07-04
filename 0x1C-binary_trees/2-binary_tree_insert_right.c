#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - This function will insert a node as a right child
 * @parent: parent is a pointer to the node to insert the right child
 * @value: value is the value to store in the new node
 *
 * Return: Must return the pointer to the newly created node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newest_node;

	newest_node = malloc(sizeof(binary_tree_t));
	if (newest_node == NULL)
		return (NULL);

	if (parent == NULL)
		return (NULL);

	newest_node->n = value;
	newest_node->parent = parent;
	newest_node->left = NULL;
	newest_node->right = parent->right;
	parent->right = newest_node;

	if (newest_node->right != NULL)
		newest_node->right->parent = newest_node;
	return (newest_node);
}
