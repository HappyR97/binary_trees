#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree.
 * @tree: pointer to the root node of the tree.
 * Return: the size of a binary tree.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (1 + binary_tree_size(tree->right) + binary_tree_size(tree->left));
}
