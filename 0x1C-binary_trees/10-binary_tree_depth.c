#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - This function will measure the depth of a node
 * in a binary tree
 *
 * @tree: tree is a pointrer to the node to measure the depth
 *
 * Return: We will be returning the depth of the node in the tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	for (count = 0; tree->parent != NULL; count++)
		tree = tree->parent;
	return (count);

}
