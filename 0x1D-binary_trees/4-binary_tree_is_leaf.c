#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - hecks if a node is a leaf
 * @node: a pointer to the node to check
 *
 * Return: 1 if node is a leaf, 0 otherwise or if node is NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->right || node->left)
		return (0);
	return (1);
}
