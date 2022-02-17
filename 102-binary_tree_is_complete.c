#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size
 *
 * @tree: pointer to the root node of the tree to traverse
 *
 * Return: 0 if tree is NULL
 */


size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
	}
}

/**
 * check_complete - checks if a binary tree is complete
 *
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 0 if tree is NULL
 */

int check_complete(binary_tree_t *tree, int index, int size)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (index >= size)
	{
		return (0);
	}

	return ((check_complete(tree->left, (2 * index) + 1, size)) &&
	(check_complete(tree->right, (2 * index) + 2, size)));
}

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 *
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 0 if tree is NULL
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	int size, index = 0;
	
	if (tree == NULL)
	{
		return (0);
	}
	size = binary_tree_size(tree);

	return (check_complete((binary_tree_t *)tree, index, size));	
}
