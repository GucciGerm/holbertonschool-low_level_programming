#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - This function will find the sibling of a node
 *
 * @node: node is a pointer to the node used to the find the sibling
 *
 * Return: NULL if no sibling or parent are null or ptr to sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	parent = node->parent;

	if ((node == NULL) || (parent == NULL))
		return (NULL);

	if (parent->left == node)
		return (parent->right);
	else
		return (parent->left);
}
