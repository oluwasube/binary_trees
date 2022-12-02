#include "binary_trees.h"

static int _tree_height(const binary_tree_t *tree);
static int _binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: A pointer to the root of the tree to measure the balance factor
 *
 * Return: the factor else 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lh = 0, rh = 0;

	if (!tree)
		return (0);
	lh = _binary_tree_height(tree->left);
	rh = _binary_tree_height(tree->right);

	return (lh - rh);
}

/**
 * _binary_tree_height - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 *
 * Return: The height or 0 if tree is NULL
 */
static int _binary_tree_height(const binary_tree_t *tree)
{
	int h = 0;

	h = _tree_height(tree);

	return (h ? h : 0);
}

/**
 * _tree_height - Measure the height
 * @tree: A tree
 *
 * Return: the height
 */
static int _tree_height(const binary_tree_t *tree)
{
	int lh = 0, rh = 0;

	if (!tree)
		return (0);

	lh = _tree_height(tree->left);
	rh = _tree_height(tree->right);

	return ((lh > rh ? lh : rh) + 1);
}
