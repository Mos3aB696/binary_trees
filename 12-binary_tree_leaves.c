#include "binary_trees.h"

#include "binary_trees.h"

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
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree:  pointer to the root node of the tree
 * to count the number of leaves
 *
 * Return: number of leaves in binary tree or 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
