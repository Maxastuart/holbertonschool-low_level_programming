#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure balance of
 *
 * Return: int balance factor, 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left = 0, height_right = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	if (tree->left)
		height_left = binary_tree_balance(tree->left) + 1;
	if (tree->right)
		height_right = binary_tree_balance(tree->right) + 1;

	return (height_left - height_right);
}
