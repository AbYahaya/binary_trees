#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: the tree
 * Return: Number of leaves in a binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leave = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		leave += 1;
	leave += binary_tree_leaves(tree->left);
	leave += binary_tree_leaves(tree->right);
	return (leave);
}
