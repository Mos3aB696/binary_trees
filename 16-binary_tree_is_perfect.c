#include "binary_trees.h"

/**
 * binary_tree_is_parent - function checks if a node is parent
 * to two child
 * @node: pointer to the node of the tree
 *
 * Return: 1 or 0
 */
int binary_tree_is_parent(const binary_tree_t *node)
{
	int is_parent = 0;

	if (node && node->left != NULL && node->right != NULL)
		is_parent = 1;

	return (is_parent);
}

/**
 * binary_tree_is_leaf -  function that checks if a node is a leaf
 * @node: pointer to the node to check
 *
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * height_tree - function that measures the
 * height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: height of tree or 0
 */
int height_tree(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree == NULL)
		return (-1);

	left = height_tree(tree->left);
	right = height_tree(tree->right);

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
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree && height_tree(tree->left) == height_tree(tree->right))
	{
		if (height_tree(tree->left) == -1)
			return (1);

		if (binary_tree_is_leaf(tree->left) && binary_tree_is_leaf(tree->right))
			return (1);

		if (binary_tree_is_parent(tree))
			return (binary_tree_is_perfect(tree->left) &&
							binary_tree_is_perfect(tree->right));
	}
	return (0);
}
