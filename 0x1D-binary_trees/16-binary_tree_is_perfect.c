#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if perfect, 0 otherwise or if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL ||
	    (tree->left != NULL && tree->right == NULL) ||
	    (tree->left == NULL && tree->right != NULL))
		return (0);

	if (binary_tree_is_perfect(tree->left) ==
	    binary_tree_is_perfect(tree->right) &&
	    binary_tree_height(tree->left) ==
	    binary_tree_height(tree->right))
		return (1);

	return (0);
}


/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height of
 *
 * Return: size_t height, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (tree == NULL || (tree->right == NULL && tree->left == NULL))
		return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	if (height_left > height_right)
		return (1 + height_left);
	return (1 + height_right);
}
