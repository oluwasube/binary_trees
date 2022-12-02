#include "binary_trees.h"


/**
 * binary_tree_sibling - function that finds the sibling of a nodes
 * @node: is a pointer to the node to find the sibling
 * Return: pointer to the sibling node or NULL if node/parent is NULL
 * If no sibling was found, return NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (!node || !node->parent)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
