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
	size_t rDepth = 0, lDepth = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->right)
	{
		rDepth += binary_tree_height2(tree->right);
	}
	if (tree->left)
	{
		lDepth += binary_tree_height2(tree->left);
	}
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

	return (binary_tree_height2(tree));
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

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

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
 * binary_tree_is_perfect - checks if a binary tree is perfec
 *
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 0 if tree is NULL
 */


int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int balance;
	size_t size, height, i, perfect_size = 1;

	balance = binary_tree_balance(tree);
	size = binary_tree_size(tree);
	height = binary_tree_height(tree);

	if (tree == NULL || balance != 0)
	{
		return (0);
	}
	for (i = 0; i < (height); i++)
	{
		perfect_size *= 2;
	}
	perfect_size -= 1;

	if (perfect_size == size)
	{
		return (1);
	}
	return (0);
}
