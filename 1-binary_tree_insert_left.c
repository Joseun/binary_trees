#include "binary_trees.h"

/**
 *  binary_tree_insert_left - function to create a new binary tree left node
 *
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 *
 * Return: Pointer to a new node or NULL on failure or parent if at root
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newleftNode;

	newleftNode = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	if (newleftNode == NULL)
	{
		return (NULL);
	}
	newleftNode->n = value;
	newleftNode->right = NULL;

	if (!parent)
	{
		newleftNode->left = NULL;
		newleftNode->parent = NULL;
		return (newleftNode);
	}
	newleftNode->left = parent->left;
	parent->left = newleftNode;
	newleftNode->parent = parent;

	if (newleftNode->left)
	{
		newleftNode->left->parent = newleftNode;
	}
	return (newleftNode);
}
