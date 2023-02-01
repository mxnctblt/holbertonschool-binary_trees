#include "binary_trees.h"

/**
 * binary_tree_is_root - function that checks if node is a root
 * @node: node is binary trees
 * Return: 1 if node is a leaf, 0 if not
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	return (node->parent == NULL);
}
