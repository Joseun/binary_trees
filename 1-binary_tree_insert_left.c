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
	binary_tree_t *tempNode;
	binary_tree_t *newleftNode = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	
	if (newleftNode == NULL)
	{
		return (NULL);
	}

	newleftNode->n = value;
	newleftNode->parent = parent;
	newleftNode->left = NULL;
	newleftNode->right = NULL;;

	if (parent == NULL)
	{
		return (NULL);
	}
	if (parent->left == NULL)
	{
		parent->left = newleftNode;
	}
	else
	{
		tempNode = parent->left;
		parent->left = newleftNode;
		tempNode->parent = newleftNode;
		newleftNode->left = tempNode;
	}
	return (newleftNode);
}
