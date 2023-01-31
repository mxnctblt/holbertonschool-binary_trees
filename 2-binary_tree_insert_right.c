#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_insert_right - function that inserst a node
 * @parent: pointer to the first node
 * @value: value of new node
 * Return: left child node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nnode_left = NULL;

	if (parent == NULL || value == '\0')
		return (NULL);

	nnode_left = malloc(sizeof(binary_tree_t));
	if (nnode_left == NULL)
		return (NULL);

	nnode_left->n = value;
	nnode_left->parent = parent;
	nnode_left->left = NULL;
	nnode_left->right = NULL;

	if (parent->right != NULL)
	{
		nnode_left->right = parent->right;
		nnode_left->right->parent = nnode_left;
	}

	parent->right = nnode_left;
	return (nnode_left);
}
