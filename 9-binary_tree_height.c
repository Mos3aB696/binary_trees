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
	if (tree == NULL)
		return (0);

	size_t left = 0;
	size_t right = 0;

	left = height_recursion(tree->left);
	right = height_recursion(tree->right);

	if (right > left)
	{
		return (right + 1);
	}
	else
	{
		return (left + 1);
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
