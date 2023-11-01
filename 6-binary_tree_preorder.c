#include "binary_trees.h"
/**
 * binary_tree_preorder - pre-order traversal to print tree elements
 * @tree: tree to go through
 * @func: function to use
 * Return: Nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!(tree) || !func)
	{
		return;
	}
	else
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
