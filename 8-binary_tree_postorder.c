#include "binary_trees.h"

/**
 * binary_tree_postorder - post-order traversal for printing tree elements
 * @tree: tree to go through
 * @func: function used
 * Return: Nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}
	else
	{
		binary_tree_postorder(tree->right, func);
		binary_tree_postorder(tree->left, func);
	}
	func(tree->n);
}
