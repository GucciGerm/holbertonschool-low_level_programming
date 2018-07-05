#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - This function will find the uncle of a given node
 *
 * @node: node is a pointer to find the uncle
 *
 *
 * Return: NULL if no uncle or ptr to uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;
	binary_tree_t *grandparent;

	parent = node->parent;
	grandparent = node->parent->parent;

	if (node == NULL)
		return (NULL);

	if ((grandparent == NULL) || (parent == NULL))
		return (NULL);

	if (grandparent->right == parent)
		return (grandparent->left);
	else
		return (grandparent->right);
}
