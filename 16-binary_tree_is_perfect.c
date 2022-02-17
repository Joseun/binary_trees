#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function to check if binary tree is perfect
 *
 * @tree: pointer to the root node to check
 *
 * Return: 1 if node if perfect, otherwise 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (!tree->left || !tree->right)
	{
		return (0);
	}
	if ((tree->left) && (tree->right))
	{
		(binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right)) == TRUE;
        return (1);
	}
	return (0);
}
