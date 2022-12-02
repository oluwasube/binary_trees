#include "binary_trees.h"
#include <stdio.h>


/**
 * tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to to measure the height
 * Return: height of the tree else 0 if tree is NULL
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t right_height, left_height;


	if (!tree)
	{
		return (0);
	}

	right_height = tree_height(tree->right);
	left_height = tree_height(tree->left);
	return (max((left_height + 1), (right_height + 1)));
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

/**
 * print_levelorder - function that goes through a binary tree
 * using pre-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node. The value in
 * the node must be passed as a parameter to this function
 * @depth: depth of the tree
 * Return: void
 */
void print_levelorder(const binary_tree_t *tree,
void (*func)(int), size_t depth)
{
	if (!tree)
		return;
	if (depth == 0)
		func(tree->n);
	else
	{
		print_levelorder(tree->left, func, depth - 1);
		print_levelorder(tree->right, func, depth - 1);
	}
}


/**
 * binary_tree_levelorder - function that goes through a binary tree
 * using pre-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node. The value in
 * the node must be passed as a parameter to this function
 * Return: void
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t i, depth;


	if (tree == NULL || func == NULL)
		return;

	depth = tree_height(tree);
	for (i = 0; i < depth; i++)
		print_levelorder(tree, func, i);
}
