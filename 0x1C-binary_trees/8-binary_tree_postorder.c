#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - This function traverses through a tree post-orderly
 *
 * @tree: tree is a pointer to the root node of the tree to traverse
 * @func: func is a pointer to a function to call each node
 *
 * Return: void, do nothing if NULL
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
