#include "binary_trees.h"

/**
 * binary_tree_is_root - function to check if node is root
 *
 * @node: pointer to the node to check
 *
 * Return: 1 if node is leaf, otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->parent)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
