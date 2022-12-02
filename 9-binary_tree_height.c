#include "binary_trees.h"

static size_t _binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 *
 * Return: The height or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h = 0;

	h = _binary_tree_height(tree);

	return (h ? h - 1 : 0);
}

/**
 * _binary_tree_height - Measure the height
 * @tree: A tree
 *
 * Return: the height
 */
static size_t _binary_tree_height(const binary_tree_t *tree)
{
	size_t lh = 0, rh = 0;

	if (!tree)
		return (0);

	lh = _binary_tree_height(tree->left);
	rh = _binary_tree_height(tree->right);

	return ((lh > rh ? lh : rh) + 1);
}
