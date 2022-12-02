#include "binary_trees.h"


/**
 * binary_tree_uncle - function that finds the uncle of a nodes
 * @node: is a pointer to the node to find the uncle
 * Return: pointer to the uncle node or NULL if node/parent is NULL
 * If no uncle was found, return NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
