#include "binary_trees.h"

/**
 * binary_tree_height - gets the height of a binary tree
 * @tree: root node to draw height from for tree
 *
 * Return: size_t representing height, 0 on failure or NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_s = 0;
	size_t right_s = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left_s += 1 + binary_tree_height(tree->left);
	if (tree->right)
		right_s += 1 + binary_tree_height(tree->right);

	if (left_s > right_s)
		return (left_s);
	else
		return (right_s);
}
