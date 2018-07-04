#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * binary_tree_node - This function will create a binary tree node
 * @parent: parent is a pointer to the parent node of the node to create
 * @value: value is the value to put in the new node
 *
 * Return: Must return a pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newest_node;

	newest_node = malloc(sizeof(binary_tree_t));
	if (newest_node == NULL)
		return (NULL);

	newest_node->n = value;
	newest_node->parent = parent;
	newest_node->left = NULL;
	newest_node->right = NULL;

	return (newest_node);
}
