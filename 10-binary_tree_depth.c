#include "binary_trees.h"

/**
 * depth_recursion - function that measures the depth of a
 * node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: depth of the node of a binary tree or -1
 */
size_t depth_recursion(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);

	return (depth_recursion(tree->parent) + 1);
}

/**
 * binary_tree_depth - function that measures the depth of tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: depth of tree or 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (depth_recursion(tree));
}
