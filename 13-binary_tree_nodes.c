#include "binary_trees.h"

/**
 * binary_tree_nodes - function that measures the nodes of a binary tree
 * @tree: pointer to the root node of the tree to to measure the nodes
 * Return: nodes of the tree else 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;


	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);

	nodes = binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left) + 1;
	return (nodes);
}
