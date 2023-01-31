#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that checks if node is leaf
 * @node: potential leaf
 * Return: 1 if leaf, 0 if no no
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && !node->left && !node->right)
		return (1);
	return (0);
}
