#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "binary_trees.h"

/**
 * binary_tree_height - This function will measure the height of a binary tree
 * @tree: tree is a pointer to the root node of the tree to measure
 *
 *
 * Return: The height of the binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight;
	size_t rightHeight;

	if (tree == NULL)
		return (0);

	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);

	if (leftHeight > rightHeight)
		return (leftHeight + 1);
	else
		return (rightHeight + 1);
}

/**
 * binary_tree_balance - This function will measure the balance factor
 * of a binary tree
 * @tree: tree is a pointer to the root node of the tree to measure
 *
 *
 * Return:  if the tree is 0, or the balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int leftHeight;
	int rightHeight;

	if (tree == NULL)
		return (0);

	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);
	return (leftHeight - rightHeight);
}
