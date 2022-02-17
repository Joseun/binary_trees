#include "binary_trees.h"

/**
 * binary_tree_depth2 - function that measures
 *  the depth of a node in a binary tree
 *
 * @tree: pointer to the root node of the tree to traverse
 *
 * Return: 0 if tree is NULL
 */

size_t binary_tree_depth2(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	size_t Depth = binary_tree_depth2(tree->parent);

	return (Depth + 1);
}

/**
 * binary_tree_depth - function that measures
 *  the depth of a node in a binary tree
 *
 * @tree: pointer to the root node of the tree to traverse
 *
 * Return: 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	return ((binary_tree_depth2(tree)) - 1);
}
