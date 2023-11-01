#include "binary_trees.h"

/**
 * binary_tree_is_full - if tree is full or not
 * full is if with tow or no child
 * @tree: check tree
 * Return: 1 if is full, 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int r = 0, l = 0;

	if (!tree)
	{
		if (tree->r && tree->l)
		{
			r = binary_tree_is_full(tree->r);
			l = binary_tree_is_full(tree->l);
			if (r == 0 || l == 0)
			{
				return (0);
			}
			return (1);
		}
		else if (tree->r == NULL && tree->l == NULL)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
