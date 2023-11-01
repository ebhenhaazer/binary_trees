#include "binary_trees.h"

/**
 * binary_tree_size - function that return the size of a tree
 * @tree: tree to check
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t r = 0, l = 0, size = 0;

	if (!tree)
	{
		return (0);
	}
	else
	{
		r = binary_tree_size(tree->right);
		l = binary_tree_size(tree->left);
		size = l + r + 1;
	}
	return (size);
}
