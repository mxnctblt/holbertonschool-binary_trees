#include "binary_trees.h"

/**
 * binary_tree_size- measure size of binary tree
 * @tree: tree to measure
 *
 * Return: size or Null
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}

/**
 * binary_tree_is_full- checks if a binary is full
 * @tree: tree to check
 *
 * Return: 1 if full, 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if ((tree->left == NULL) && (tree->right) == NULL)
	{
		return (1);
	}
	if (tree->left && tree->right)
	{
		return ((binary_tree_is_full(tree->left))
			&& (binary_tree_is_full(tree->right)));
	}
	return (0);
}

/**
 * binary_tree_is_perfect- check if tree is perfect
 * @tree: tree to check
 *
 * Return: 1 if perfect, otherwise 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	if (binary_tree_is_full(tree->left) == (binary_tree_is_full(tree->right)))
	{
		if (binary_tree_size(tree->left) == binary_tree_size(tree->right))
		{
			return (1);
		}
	}
	return (0);
}
