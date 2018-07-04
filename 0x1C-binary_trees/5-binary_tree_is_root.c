#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - This function will check if the given node is a root
 * @node: node is pointer to the node to check
 *
 *
 * Return: Must return 1 is node is root, 0 if node is NULL
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if ((node->left) != NULL && (node->right) != NULL)
		return (1);
	return (0);
}
