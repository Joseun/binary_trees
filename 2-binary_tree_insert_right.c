#include "binary_trees.h"

/**
 *  binary_tree_insert_right - function to create a new binary tree right node
 *
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 *
 * Return: Pointer to a new node or NULL on failure or parent if at root
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newrightNode = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	if (newrightNode == NULL)
	{
		return (NULL);
	}
	newrightNode->n = value;
	newrightNode->left = NULL;

	if (!parent)
	{
		newrightNode->right = NULL;
		newrightNode->parent = NULL;
		return (NULL);
	}
	newrightNode->right = parent->right;
	parent->right = newrightNode;
	newrightNode->parent = parent;

	if (newrightNode->right)
	{
		newrightNode->right->parent = newrightNode;
	}
	return (newrightNode);
}
