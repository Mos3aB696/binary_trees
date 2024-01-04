#include "binary_trees.h"

/**
 * binary_tree_has_child - function checks if a node is parent
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
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if binary tree is full or 0
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (binary_tree_is_leaf(tree))
		return (1);

	if (binary_tree_is_parent(tree))
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}
