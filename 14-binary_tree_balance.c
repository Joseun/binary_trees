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
	if (tree == NULL)
	{
		return (0);
	}
	size_t rDepth = binary_tree_balance2(tree->right);
	size_t lDepth = binary_tree_balance2(tree->left);
	int balance = lDepth - rDepth + 1;
	return (balance);
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
	int balance = binary_tree_balance2(tree) - 1;

	return (balance);
}
