#include "binary_trees.h"

/**
 * binary_tree_depth -to get the depth of a node in abinary tree
 * @tree: root node
 *
 * Return: size_t - height, 0 on failure or NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	if (tree->parent)
		depth += 1 + binary_tree_depth(tree->parent);
	return (depth);
}
