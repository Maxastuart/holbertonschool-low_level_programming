#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves of a binary tree
 * @tree: a pointer to the root node of the tree to count the leaves of
 *
 * Return: size_t number of leaves, 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (leaves);

	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);

	if (leaves == 0)
		leaves = 1;

	return (leaves);
}
