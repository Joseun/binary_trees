#include "binary_trees.h"

/**
 * binary_tree_nodes - function to count the number of nodes in a binary tree
 *
 * @tree: pointer to the root node
 *
 * Return: 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->right != NULL || tree->left != NULL)
	{
		counter += binary_tree_nodes(tree->left) + 1
		+ binary_tree_nodes(tree->right);
	}

	return (counter);
}
