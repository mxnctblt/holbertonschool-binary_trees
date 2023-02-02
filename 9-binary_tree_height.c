#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height
 * of a binary tree
 * @tree: pointer to root node of tree to measure height
 * Return: if tree is NULL return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t size_left = 0;
	size_t size_right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		size_left += 1 + binary_tree_height(tree->left);
	if (tree->right)
		size_right += 1 + binary_tree_height(tree->right);

	if (size_left > size_right)
		return (size_left);
	else
		return (size_right);
}
