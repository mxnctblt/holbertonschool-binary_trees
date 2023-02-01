#include "binary_trees.h"

/**
 * binary_tree_inorder - function that traverses a tree in
 * order to call function
 * @tree: pointer to root node
 * @func: function that calls a tree's node
 * Return: 0.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
