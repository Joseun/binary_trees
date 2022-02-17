#include "binary_trees.h"

/**
 * binary_tree_height2 - function that measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to traverse
 *
 * Return: 0 if tree is NULL
 */

size_t binary_tree_height2(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	size_t rDepth = binary_tree_height2(tree->right);
	size_t lDepth = binary_tree_height2(tree->left);

	if (lDepth > rDepth)
	{
		return (lDepth + 1);
	}
	else
	{
		return (rDepth + 1);
	}
}

/**
 * binary_tree_height - function that measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to traverse
 *
 * Return: 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	return ((binary_tree_height2(tree)) - 1);
}
