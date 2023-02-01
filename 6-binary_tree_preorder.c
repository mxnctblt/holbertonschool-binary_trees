#include "binary_trees.h"

/**
 * binary_tree_preorder - function that goes thru a binary tree
 * using pre-order traversal.
 * @tree: const pointer to root node to begin traversal at.
 * @func: function to call
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{

	if (tree != NULL && func != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
