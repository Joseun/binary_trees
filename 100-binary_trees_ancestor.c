#include "binary_trees.h"

/**
 * binary_trees_ancestor -  finds the lowest common ancestor of two nodes
 *
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: ancestor node, or NULL iis no ancenstor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	const binary_tree_t *second_copy;

	second_copy = second;

	if (first == NULL || second == NULL)
	{
		return (NULL);
	}

	while (first)
	{
		while (second)
		{
			if (second == first)
			{
				return ((binary_tree_t *)first);
			}
			else if (!second->parent)
			{
				break;
			}
			second = second->parent;
		}
		second = second_copy;
		first = first->parent;
	}

	return (NULL);
}
