#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - This function codes the nodes with at least 1 child
 * in a binary tree
 * @tree: tree is a pointer to the root node of the tree to count
 *
 *
 * Return: 0 is the tree is empty, or the count of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if ((tree->left) == NULL && (tree->right) == NULL)
		return (0);

	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
