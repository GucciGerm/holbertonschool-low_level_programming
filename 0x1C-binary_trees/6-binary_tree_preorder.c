#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - This function uses pre-order traversal to go through
 * binary tree
 *
 * @tree: tree is a pointer to the root node of the tree to traverse
 * @func: func is a pointer to a function to call for each node
 *
 * Return: None, do nothing if NULL
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
