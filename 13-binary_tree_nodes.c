#include "binary_trees.h"

/**
 * binary_tree_has_child - function checks if a node has child
 * @node: pointer to the node of the tree
 *
 * Return: 1 or 0
 */
int binary_tree_has_child(const binary_tree_t *node)
{
	int has_child = 0;

	if (node && (node->left != NULL || node->right != NULL))
		has_child = 1;

	return (has_child);
}

/**
 * binary_tree_nodes - function that counts the nodes with at least 1
 * child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Return: number of nodes or 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (binary_tree_has_child(tree))
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);

	return (0);
}
