#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size
 * using in-order traversal
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
 * binary_tree_leaves - function to count the number of leaves in a binary tree
 *
 * @tree: pointer to the root node
 *
 * Return: 1 if node is leaf, otherwise 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else
	{
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	}
}

/**
 * binary_tree_nodes - function to count the number of nodes in a binary tree
 *
 * @tree: pointer to the root node
 *
 * Return: 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	
    size_t nodes = binary_tree_size(tree) - binary_tree_leaves(tree);

    return (nodes);
}
