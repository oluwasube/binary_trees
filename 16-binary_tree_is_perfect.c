#include "binary_trees.h"
#include <stdio.h>

size_t max(size_t a, size_t b);
size_t tree_height(const binary_tree_t *tree);
size_t perfect_tree(const binary_tree_t *tree, size_t height, size_t level);
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to to measure the nodes
 * Return: 1 if tree is true else 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, level;


	height = tree_height(tree) + 1;
	level = 0;
	return (perfect_tree(tree, height, level + 1));
}

/**
 * tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to to measure the height
 * Return: height of the tree else 0 if tree is NULL
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t right_height, left_height;


	if (!tree || (!tree->left && !tree->right))
	{
		return (0);
	}

	right_height = tree_height(tree->right);
	left_height = tree_height(tree->left);
	return (max(left_height + 1, right_height + 1));
}

/**
 * perfect_tree - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to to measure the nodes
 * @height: height of the tree
 * @level: current height of the node
 * Return: 1 if tree is true else 0 if tree is NULL
 */
size_t perfect_tree(const binary_tree_t *tree, size_t height, size_t level)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right && (height == level))
		return (1);
	if (!tree->left || !tree->right)
		return (0);
	return (perfect_tree(tree->left, height, level + 1) &&
	perfect_tree(tree->right, height, level + 1));
}

/**
 * max - function that return the maximum of two numbers
 * @a: first number
 * @b: second number
 * Return: maximum of the two numbers
 */
size_t max(size_t a, size_t b)
{
	return (a > b ? a : b);
}
