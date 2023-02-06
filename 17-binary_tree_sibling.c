#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of node
 * @node: pointer to the node to find sibling
 * Return: NULL if node or parent is NULL or if node has no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
