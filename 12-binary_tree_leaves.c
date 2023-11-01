#include "binary_trees.h"

/**
 * binary_tree_leaves - func returns number of leaves in tree
 * @tree: check tree 
 * * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t r = 0, l = 0, leaf = 0;

	if (!tree)
	{
		return (0);
	}
	else
	{
		r = binary_tree_leaves(tree->right);
		l = binary_tree_leaves(tree->left);
		leaf = r + l;
		return ((r == NULL && l == NULL) ? leaf + 0 : leaf + 1);
	}
}
