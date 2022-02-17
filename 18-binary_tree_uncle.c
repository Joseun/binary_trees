#include "binary_trees.h"

/**
 * binary_tree_uncle -  finds the uncle of a node
 *
 * @node: pointer to the node to find the sibling
 *
 * Return: uncle, or NULL if parent or node is NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent, *parent;

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
    if (node->parent->parent == NULL)
	{
		return (NULL);
	}
	parent = node->parent;
	grandparent = node->parent->parent;

	if (grandparent->left && grandparent->left != parent)
	{
		return (grandparent->left);
	}
	if (grandparent->right && grandparent->right != parent)
	{
		return (grandparent->right);
	}
	return (NULL);
}
