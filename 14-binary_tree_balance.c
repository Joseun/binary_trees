#include "binary_trees.h"

/**
 * binary_tree_balance2 - measures the balance factor of a binary tree
 *
 * @tree: pointer to the root node of the tree to traverse
 *
 * Return: 0 if tree is NULL
 */

int binary_tree_balance2(const binary_tree_t *tree)
{
	int rbalance = 0, lbalance = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->right)
	{
		rbalance += binary_tree_balance2(tree->right);
	}
	if (tree->left)
	{
		lbalance += binary_tree_balance2(tree->left);
	}

	return (lbalance - rbalance + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: pointer to the root node of the tree to traverse
 *
 * Return: 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	return (binary_tree_balance2(tree) - 1);
}
