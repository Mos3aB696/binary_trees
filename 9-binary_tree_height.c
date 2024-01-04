#include "binary_trees.h"

/**
 * height_recursion - function that measures the
 * height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: height of tree or 0
 */
size_t height_recursion(const binary_tree_t *tree)
{
	size_t left_subtree = 0;
	size_t right_subtree = 0;

	if (tree == NULL)
		return (0);

	left_subtree = height_recursion(tree->left);
	right_subtree = height_recursion(tree->right);

	if (right_subtree > left_subtree)
	{
		return (right_subtree + 1);
	}
	else
	{
		return (left_subtree + 1);
	}
}

/**
 * binary_tree_height - calls the height_recursion
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: the height of tree or 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (height_recursion(tree) - 1);
}
