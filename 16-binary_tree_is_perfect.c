#include "binary_trees.h"

/**
 * tree_is_perfect - function checks if tree is perfect or not
 * each node has 2 or no nodes, same quantity of levels in left as right
 * @tree: tree to check
 * Return: 0 if not perfect or other number - the level of height
 */
int tree_is_perfect(const binary_tree_t *tree)
{
	int rht = 0;
	int lft = 0;

	if (tree->right && tree->left)
	{
		rht = 1 + tree_is_perfect(tree->right);
		lft = 1 + tree_is_perfect(tree->left);
		if (lft == rht && lft != 0 && rht != 0)
			return (rht);
		return (0);
	}
	else if (tree->right == NULL && tree->left == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * binary_tree_is_perfect - perfect/not a tree
 * @tree: check tree
 * Return: 1 if so, 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		r = tree_is_perfect(tree);
		if (r != 0)
		{
			return (1);
		}
		return (0);
	}
}
