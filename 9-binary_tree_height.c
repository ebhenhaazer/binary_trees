#include "binary_trees.h"
/**
 * binary_tree_height - Function that measures the height of a binary tree
 * @tree: tree to go through
 * Return: the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t r = 0, l = 0;

	if (!tree)
	{
		return (0);
	}
	else
	{
		r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		}
		return ((r > l) ? r : l);
	}
}
