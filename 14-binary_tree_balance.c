#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Description: If tree is NULL, return 0
 *
 * Return: balance factor of a binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	/* calculate the height of the left and right subtrees */
	int left_height = binary_tree_height(tree->left);
	int right_height = binary_tree_height(tree->right);

	/* return the difference between the heights */
	return (left_height - right_height);
}
