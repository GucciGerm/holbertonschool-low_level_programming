#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - This function counts the # of leaves in binary tree
 * @tree: tree is a pointer to the root node of the tree to count
 *
 *
 * Return: Must return the number of leaves within a tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	if ((tree->left) == NULL && (tree->right) == NULL)
		return (1);

	return (binary_tree_leaves(tree->left) +
		binary_tree_leaves(tree->right));
}
