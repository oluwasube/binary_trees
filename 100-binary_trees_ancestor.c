#include "binary_trees.h"


/**
 * binary_trees_ancestor - function that finds the
 * lowest common ancestor of two nodes
 * @first: is a pointer to the first node
 * @second: is a pointer to the second node
 * Return: pointer to the lowest common ancestor node of the two given nodes
 * If no common ancestor was found, your function must return NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	binary_tree_t *tmp;


	if ((!first->parent && !second->parent) || (!first || !second))
		return (NULL);
	tmp = (binary_tree_t *)second;
	while (first)
	{
		while (second)
		{
			if (first == second)
				return ((binary_tree_t *)first);
			second = second->parent;

		}
		first = first->parent;
		second = tmp;

	}

	return (NULL);
}
