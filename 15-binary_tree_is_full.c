#include "binary_trees.h"

/**
 * isFullRecursive - Checks if a binary tree is full recursively.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If tree is not full, 0.
 *         Otherwise, 1.
 */
int isFullRecursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    isFullRecursive(tree->left) == 0 ||
		    isFullRecursive(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binaryTreeTsFull - Checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If tree is NULL or is not full - 0.
 *         Otherwise - 1.
 */
int binaryTreeTsFull(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (isFullRecursive(tree));
}
