#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes of a binary tree where children > 0
 * @tree: a pointer to the root node of the tree to count the nodes of
 *
 * Return: size_t number of nodes, 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 1;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);

	return (nodes);
}
