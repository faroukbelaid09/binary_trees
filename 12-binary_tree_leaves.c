#include "binary_trees.h"

/**
 * binaryTreeLeaves - Counts the leaves in a binary tree.
 * @tree: A pointer to the root node of the tree to count the leaves of.
 *
 * Return: The number of leaves in the tree.
 */
size_t binaryTreeLeaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		leaves += (!tree->left && !tree->right) ? 1 : 0;
		leaves += binaryTreeLeaves(tree->left);
		leaves += binaryTreeLeaves:(tree->right);
	}
	return (leaves);
}
