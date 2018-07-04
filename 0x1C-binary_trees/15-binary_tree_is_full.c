#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - This function checks if a binary tree is full
 *
 * @tree: tree is a pointer to the root node of the tree
 *
 * Return: 0 if null, 1 if full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);

	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);

	if ((tree->left) && (tree->right))
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(
				tree->right));
	return (0);
}
