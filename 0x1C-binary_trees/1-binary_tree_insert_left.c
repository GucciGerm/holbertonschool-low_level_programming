#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - This function will insert a node as a left child
 * @parent: parent is a pointer to the node to insert the left-child
 * @value: value is the value to store in the new node
 *
 * Return: Must return a pointer to the newly created node or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newest_node;

	newest_node = malloc(sizeof(binary_tree_t));
	if (newest_node == NULL)
		return (NULL);

	if (parent == NULL)
		return (NULL);

	newest_node->n = value;
	newest_node->parent = parent;
	newest_node->left = parent->left;
	newest_node->right = NULL;
	parent->left = newest_node;

	if (newest_node->left != NULL)
		newest_node->left->parent = newest_node;
	return (newest_node);
}
