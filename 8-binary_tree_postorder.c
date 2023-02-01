#include "binary_trees.h"

/**
 * binary_tree_postorder - function that traverses a tree in post order.
 * @tree: pointer to node to begin traversal at
 * @func: function to call on tree's node
 * Return: nothing if tree or func is NULL
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
