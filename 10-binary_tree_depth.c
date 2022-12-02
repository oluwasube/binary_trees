#include "binary_trees.h"

static size_t _binary_tree_depth(const binary_tree_t *tree);

/**
 * binary_tree_depth - Measures the depth of a binary tree
 * @tree: A pointer to the root node of the tree to measure the depth
 *
 * Return: The depth or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t h = 0;

	h = _binary_tree_depth(tree);

	return (h ? h - 1 : 0);
}

/**
 * _binary_tree_depth - Measure the depth
 * @tree: A tree
 *
 * Return: the depth
 */
static size_t _binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (_binary_tree_depth(tree->parent) + 1);
}
