#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Description: If no common ancestor was found, your function must return NULL
 *
 * Return: pointer to the lowest common ancestor node of the two given nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
	{
		return (NULL);
	}

	if (first == second)
	{
		return (binary_tree_t *)first;
	}

	binary_tree_t *first_parent = first->parent;
	binary_tree_t *second_parent = second->parent;

	if (first == second_parent || !first_parent ||
			(!first_parent->parent && second_parent))
	{
		return (binary_trees_ancestor(first, second_parent));
	}
	else if (first_parent == second || !second_parent ||
			(!second_parent->parent && first_parent))
	{
		return (binary_trees_ancestor(first_parent, second));
	}
	else
	{
		return (binary_trees_ancestor(first_parent, second_parent));
	}
}
